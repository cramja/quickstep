//   Copyright 2014-2015 Quickstep Technologies LLC.
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.

#include "gtest/gtest.h"
#include "tests/message_bus_unittest_common.h"
#include "tmb/pure_memory_message_bus.h"

namespace tmb {

typedef ::testing::Types<PureMemoryMessageBus<false>,
                         PureMemoryMessageBus<true>> TestTypes;
INSTANTIATE_TYPED_TEST_CASE_P(PureMemory, MessageBusTest, TestTypes);

typedef ::testing::Types<PureMemoryMessageBus<true>> DeletionTestTypes;
INSTANTIATE_TYPED_TEST_CASE_P(PureMemory,
                              SeparateDeletionMessageBusTest,
                              DeletionTestTypes);

}  // namespace tmb
