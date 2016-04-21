/**
 *   Copyright 2016, Quickstep Research Group, Computer Sciences Department,
 *     University of Wisconsin—Madison.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 **/

#include "query_execution/PolicyEnforcer.hpp"

#include <cstddef>
#include <memory>
#include <utility>
#include <unordered_map>
#include <vector>

#include "query_execution/WorkerDirectory.hpp"
#include "query_optimizer/QueryHandle.hpp"

#include "glog/logging.h"

namespace quickstep {

bool PolicyEnforcer::admitQuery(QueryHandle *query_handle) {
  if (admitted_queries_.size() < kMaxConcurrentQueries) {
    // Ok to admit the query.
    const std::size_t query_id = query_handle->query_id();
    if (admitted_queries_.find(query_id) == admitted_queries_.end()) {
      admitted_queries_[query_id].reset(
          new QueryManager(foreman_client_id_,
                           num_numa_nodes_,
                           query_handle,
                           catalog_database_,
                           storage_manager_,
                           bus_));
      return true;
    } else {
      LOG(ERROR) << "Query with same ID " << query_id << " exists";
      return false;
    }
  } else {
    // This query will have to wait.
    waiting_queries_.push(query_handle);
    return false;
  }
}

void PolicyEnforcer::processMessage(const TaggedMessage &tagged_message) {
  // TODO(harshad) : Provide processXMessage() public functions in
  // QueryManager, so that we need to extract message from the
  // TaggedMessage only once.
  std::size_t query_id;
  switch (tagged_message.message_type()) {
    case kWorkOrderCompleteMessage: {
      serialization::WorkOrderCompletionMessage proto;
      CHECK(proto.ParseFromArray(tagged_message.message(),
                                 tagged_message.message_bytes()));
      query_id = proto.query_id();
    }
    case kRebuildWorkOrderCompleteMessage: {
      serialization::WorkOrderCompletionMessage proto;
      CHECK(proto.ParseFromArray(tagged_message.message(),
                                 tagged_message.message_bytes()));
      query_id = proto.query_id();
    }
    case kCatalogRelationNewBlockMessage: {
      serialization::CatalogRelationNewBlockMessage proto;
      CHECK(proto.ParseFromArray(tagged_message.message(),
                                 tagged_message.message_bytes()));
      query_id = proto.query_id();
    }
    case kDataPipelineMessage: {
      serialization::DataPipelineMessage proto;
      CHECK(proto.ParseFromArray(tagged_message.message(),
                                 tagged_message.message_bytes()));
      query_id = proto.query_id();
    }
    case kWorkOrdersAvailableMessage: {
      serialization::WorkOrdersAvailableMessage proto;
      CHECK(proto.ParseFromArray(tagged_message.message(),
                                 tagged_message.message_bytes()));
    }
    case kWorkOrderFeedbackMessage: {
      // TODO(harshad) Add query ID to FeedbackMessage.
      query_id = 0;
      break;
    }
    default:
      LOG(FATAL) << "Unknown message type found in PolicyEnforcer";
    DCHECK(admitted_queries_.find(query_id) != admitted_queries_.end());
    QueryManager::QueryStatusCode return_code =
        admitted_queries_[query_id]->processMessage(tagged_message);
    if (return_code == QueryManager::QueryStatusCode::kQueryExecuted) {
      removeQuery(query_id);
      if (!waiting_queries_.empty()) {
        // Admit the earliest waiting query.
        QueryHandle *new_query = waiting_queries_.front();
        waiting_queries_.pop();
        admitQuery(new_query);
      }
    }
  }
}


void PolicyEnforcer::getWorkerMessages(
    std::vector<std::unique_ptr<WorkerMessage>> *worker_messages) {
  // Iterate over admitted queries until either there are no more
  // messages available, or the maximum number of messages have
  // been collected.
  DCHECK(worker_messages->empty());
  // TODO(harshad) - Make this function generic enough so that it
  // works well when multiple queries are admitted.
  DCHECK(!admitted_queries_.empty());
  const std::size_t per_query_share = kMaxNumWorkerMessages / admitted_queries_.size();
  DCHECK(per_query_share > 0);

  for (auto query_manager_it = admitted_queries_.begin();
       query_manager_it != admitted_queries_.end();
       ++query_manager_it) {
    QueryManager *curr_query_manager = query_manager_it->second.get();
    std::size_t messages_collected_curr_query = 0;
    while (messages_collected_curr_query < per_query_share) {
      WorkerMessage *next_worker_message =
          curr_query_manager->getNextWorkerMessage(0, -1);
      if (next_worker_message != nullptr) {
        ++messages_collected_curr_query;
        worker_messages->push_back(std::unique_ptr<WorkerMessage>(next_worker_message));
      } else {
        // No more work ordes from the current query at this time.
        // Check if the query's execution is over.
        if (curr_query_manager->getQueryExecutionState().hasQueryExecutionFinished()) {
          // If the query has been executed, remove it.
          removeQuery(query_manager_it->first);
        }
        break;
      }
    }
  }
}

void PolicyEnforcer::removeQuery(const std::size_t query_id) {
  DCHECK(admitted_queries_.find(query_id) != admitted_queries_.end());
  admitted_queries_[query_id].reset(nullptr);
  admitted_queries_.erase(query_id);
}

}  // namespace quickstep