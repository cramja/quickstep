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

#ifndef QUICKSTEP_UTILITY_EVENT_PROFILER_HPP_
#define QUICKSTEP_UTILITY_EVENT_PROFILER_HPP_

#include <chrono>
#include <cstddef>
#include <map>
#include <ostream>
#include <thread>
#include <type_traits>
#include <utility>
#include <vector>

#include "threading/Mutex.hpp"

#include "glog/logging.h"

namespace quickstep {

/** \addtogroup Utility
 *  @{
 */

class EventProfiler {
 public:
  EventProfiler()
      : zero_time(std::chrono::steady_clock::now()) {
  }

  struct EventInfo {
    std::chrono::steady_clock::time_point start_time;
    std::chrono::steady_clock::time_point end_time;
    bool is_finished;

    explicit EventInfo(const std::chrono::steady_clock::time_point &start_time_in)
        : start_time(start_time_in),
          is_finished(false) {
    }
  };

  struct EventContainer {
    void startEvent(const std::string &tag) {
      events[tag].emplace_back(std::chrono::steady_clock::now());
    }

    void endEvent(const std::string &tag) {
      auto &event_info = events.at(tag).back();
      event_info.is_finished = true;
      event_info.end_time = std::chrono::steady_clock::now();
    }

    std::map<std::string, std::vector<EventInfo>> events;
  };

  EventContainer *getContainer() {
    MutexLock lock(mutex_);
    return &thread_map_[std::this_thread::get_id()];
  }

  void writeToStream(std::ostream &os) const {
    int thread_id = 0;
    for (const auto &thread_ctx : thread_map_) {
      for (const auto &event_group : thread_ctx.second.events) {
        for (const auto &event_info : event_group.second) {
          CHECK(event_info.is_finished) << "Unfinished profiling event";

          os << thread_id << "," << event_group.first << ","
             << std::chrono::duration<double>(event_info.start_time - zero_time).count()
             << ","
             << std::chrono::duration<double>(event_info.end_time - zero_time).count()
             << "\n";
        }
      }
      ++thread_id;
    }
  }

 private:
  std::chrono::steady_clock::time_point zero_time;
  std::map<std::thread::id, EventContainer> thread_map_;
  Mutex mutex_;
};

extern EventProfiler simple_profiler;

/** @} */

}  // namespace quickstep

#endif  // QUICKSTEP_UTILITY_EVENT_PROFILER_HPP_
