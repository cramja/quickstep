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

#ifndef QUICKSTEP_TRANSACTION_LOCK_REQUEST_HPP_
#define QUICKSTEP_TRANSACTION_LOCK_REQUEST_HPP_

#include "transaction/AccessMode.hpp"
#include "transaction/ResourceId.hpp"
#include "transaction/Transaction.hpp"

namespace quickstep {

namespace transaction {

/** \addtogroup Transaction
 *  @{
 */

/**
 * @brief Enum class for representing request types.
 */
enum class RequestType {
  kACQUIRE_LOCK = 0,
  kRELEASE_LOCKS
};

/**
 * @brief Class for encapsulate lock request put into
 *        the buffers.
 */
class LockRequest {
 public:
  /**
   * @brief Constructor for LockRequest.
   *
   * @param tid Id of the transaction that requests the lock.
   * @param rid Id of the resource that is requested.
   * @param access_mode Access mode of the request.
   * @param type Type of the request.
   */
  LockRequest(TransactionId tid,
              const ResourceId &rid,
              AccessMode access_mode,
              RequestType type);

  /**
   * @brief Getter for transaction id.
   *
   * @return Transaction id of the request.
   */
  TransactionId getTransactionId() const;

  /**
   * @brief Getter for resource id.
   *
   * @return Resource id of the request.
   */
  ResourceId getResourceId() const;

  /**
   * @brief Getter for access mode.
   *
   * @return Access mode of the request.
   */
  AccessMode getAccessMode() const;

  /**
   * @brief Getter for request type.
   *
   * @return Type of the request.
   */
  RequestType getRequestType() const;

 private:
  TransactionId tid_;
  ResourceId rid_;
  AccessMode access_mode_;
  RequestType request_type_;
};

/** @} */

}  // namespace transaction

}  // namespace quickstep

#endif
