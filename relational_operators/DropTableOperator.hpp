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

#ifndef QUICKSTEP_RELATIONAL_OPERATORS_DROP_TABLE_OPERATOR_HPP_
#define QUICKSTEP_RELATIONAL_OPERATORS_DROP_TABLE_OPERATOR_HPP_

#include "catalog/CatalogTypedefs.hpp"
#include "relational_operators/RelationalOperator.hpp"
#include "relational_operators/WorkOrder.hpp"
#include "storage/StorageBlockInfo.hpp"
#include "utility/Macros.hpp"

namespace quickstep {

class CatalogDatabase;
class CatalogRelation;
class QueryContext;
class StorageManager;
class WorkOrdersContainer;

/** \addtogroup RelationalOperators
 *  @{
 */

/**
 * @brief An operator which drops a relation.
 **/
class DropTableOperator : public RelationalOperator {
 public:
  /**
   * @brief Constructor.
   *
   * @param rel_id The id of the relation to drop.
   * @param only_drop_blocks If true, only drop the blocks belonging to
   *        relation, but leave relation in the database.
   **/
  explicit DropTableOperator(const CatalogRelation &relation,
                             const bool only_drop_blocks = false)
      : relation_(relation),
        only_drop_blocks_(only_drop_blocks),
        work_generated_(false) {}

  ~DropTableOperator() override {}

  bool getAllWorkOrders(WorkOrdersContainer *container) override;

 private:
  const CatalogRelation &relation_;
  const bool only_drop_blocks_;
  bool work_generated_;

  DISALLOW_COPY_AND_ASSIGN(DropTableOperator);
};

/**
 * @brief A WorkOrder produced by DropTableOperator.
 **/
class DropTableWorkOrder : public WorkOrder {
 public:
  /**
   * @brief Constructor.
   *
   * @param relation The relation to drop.
   * @param only_drop_blocks If true, only drop the blocks belonging to
   *        relation, but leave relation in the database.
   **/
  explicit DropTableWorkOrder(const relation_id rel_id,
                              const bool only_drop_blocks)
      : rel_id_(rel_id), only_drop_blocks_(only_drop_blocks) {}

  ~DropTableWorkOrder() override {}

  void execute(QueryContext *query_context,
               CatalogDatabase *catalog_database,
               StorageManager *storage_manager) override;

 private:
  const relation_id rel_id_;
  const bool only_drop_blocks_;

  DISALLOW_COPY_AND_ASSIGN(DropTableWorkOrder);
};

/** @} */

}  // namespace quickstep

#endif  // QUICKSTEP_RELATIONAL_OPERATORS_DROP_TABLE_OPERATOR_HPP_
