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

#include "transaction/TransactionTable.hpp"

#include <vector>

namespace quickstep {

namespace transaction {

TransactionTable::TransactionTable() {
}

TransactionTableResult
    TransactionTable::putOwnEntry(TransactionId tid,
                                  const ResourceId &rid,
                                  AccessMode access_mode) {
  TransactionListPair &transaction_list_pair = internal_map_[tid];
  TransactionOwnList &transaction_own_list = transaction_list_pair.first;

  transaction_own_list.push_back(std::make_pair(rid, Lock(rid, access_mode)));

  return TransactionTableResult::kPLACED_IN_OWNED;
}

TransactionTableResult
    TransactionTable::putPendingEntry(TransactionId tid,
                                      const ResourceId &rid,
                                      AccessMode access_mode) {
  TransactionListPair &transaction_list_pair = internal_map_[tid];
  TransactionPendingList &transaction_pending_list
      = transaction_list_pair.second;

  transaction_pending_list.push_back(std::make_pair(rid,
                                                    Lock(rid, access_mode)));

  return TransactionTableResult::kPLACED_IN_PENDING;
}

TransactionTableResult
    TransactionTable::deleteOwnEntry(TransactionId tid,
                                     const ResourceId &rid,
                                     AccessMode access_mode) {
  TransactionListPair &transaction_list_pair = internal_map_[tid];
  TransactionOwnList &transaction_own_list = transaction_list_pair.first;

  std::size_t original_size = transaction_own_list.size();
  transaction_own_list.remove_if(
      [&rid, &access_mode](TransactionEntry &entry) {
        return entry.second.getResourceId() == rid
        && entry.second.getAccessMode() == access_mode;
      });
  if (transaction_own_list.size() == original_size) {
    return TransactionTableResult::kDEL_ERROR;
  } else {
    return TransactionTableResult::kDEL_FROM_OWNED;
  }
}

TransactionTableResult
    TransactionTable::deletePendingEntry(TransactionId tid,
                                         const ResourceId &rid,
                                         AccessMode access_mode) {
  TransactionListPair &transaction_list_pair = internal_map_[tid];
  TransactionPendingList &transaction_pending_list
      = transaction_list_pair.second;

  std::size_t original_size = transaction_pending_list.size();
  transaction_pending_list.remove_if(
     [&rid, &access_mode] (TransactionEntry &entry) {
       return entry.second.getResourceId() == rid
         && entry.second.getAccessMode() == access_mode;
     });

  if (transaction_pending_list.size() == original_size) {
    return TransactionTableResult::kDEL_ERROR;
  } else {
    return TransactionTableResult::kDEL_FROM_PENDING;
  }
}

std::vector<ResourceId> TransactionTable::getResourceIdList(TransactionId tid) {
  std::vector<ResourceId> result;
  const TransactionListPair &transaction_list_pair = internal_map_[tid];
  const TransactionOwnList &transaction_own_list = transaction_list_pair.second;
  const TransactionPendingList
      &transaction_pending_list = transaction_list_pair.first;

  for (TransactionOwnList::const_iterator it = transaction_own_list.begin();
       it != transaction_own_list.end();
       ++it) {
    result.push_back(it->first);
  }

  for (TransactionPendingList::const_iterator
           it = transaction_pending_list.begin();
       it != transaction_pending_list.end();
       ++it) {
    result.push_back(it->first);
  }

  return result;
}

TransactionTableResult TransactionTable::deleteTransaction(TransactionId id) {
  std::size_t original_size = internal_map_.size();
  internal_map_.erase(id);
  std::size_t size_after_delete = internal_map_.size();

  if (original_size == size_after_delete) {
    return  TransactionTableResult::kTRANSACTION_DELETE_ERROR;
  }

  return TransactionTableResult::kTRANSACTION_DELETE_OK;
}

}  // namespace transaction

}  // namespace quickstep
