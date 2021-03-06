/**
 *   Copyright 2011-2015 Quickstep Technologies LLC.
 *   Copyright 2015 Pivotal Software, Inc.
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

#include "query_optimizer/logical/BinaryJoin.hpp"

#include <string>
#include <vector>

#include "query_optimizer/OptimizerTree.hpp"
#include "query_optimizer/expressions/AttributeReference.hpp"

namespace quickstep {
namespace optimizer {
namespace logical {

namespace E = ::quickstep::optimizer::expressions;

std::vector<E::AttributeReferencePtr> BinaryJoin::getOutputAttributes() const {
  std::vector<E::AttributeReferencePtr> output_attributes =
      left_->getOutputAttributes();
  const std::vector<E::AttributeReferencePtr> output_attributes_by_right_operand =
      right_->getOutputAttributes();
  output_attributes.insert(output_attributes.end(),
                           output_attributes_by_right_operand.begin(),
                           output_attributes_by_right_operand.end());
  return output_attributes;
}

void BinaryJoin::getFieldStringItems(
    std::vector<std::string> *inline_field_names,
    std::vector<std::string> *inline_field_values,
    std::vector<std::string> *non_container_child_field_names,
    std::vector<OptimizerTreeBaseNodePtr> *non_container_child_fields,
    std::vector<std::string> *container_child_field_names,
    std::vector<std::vector<OptimizerTreeBaseNodePtr>> *container_child_fields) const {
  non_container_child_field_names->push_back("left");
  non_container_child_field_names->push_back("right");

  non_container_child_fields->push_back(left_);
  non_container_child_fields->push_back(right_);
}

}  // namespace logical
}  // namespace optimizer
}  // namespace quickstep
