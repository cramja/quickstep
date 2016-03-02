#ifndef QUICKSTEP_TRANSACTION_DIRECTED_GRAPH_HPP_
#define QUICKSTEP_TRANSACTION_DIRECTED_GRAPH_HPP_

#include <algorithm>
#include <memory>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <vector>

#include "transaction/Transaction.hpp"
#include "utility/Macros.hpp"

namespace quickstep {

namespace transaction {

/** \addtogroup Transaction
 *  @{
 */

/**
 * @brief Class for representing a directed graph.
 *        Vertices are transaction ids, edges are
 *        wait-for relations.
 */
class DirectedGraph {
 public:
  using NodeId = std::uint64_t;

  /**
   * @brief Default constructor
   */
  DirectedGraph() {}

  /**
   * @brief Adds node with given transaction id.
   * @warning It does not check whether transaction id
   *          is already in the graph.
   * @warning Pointer ownership will pass to the graph,
   *          threfore it should not be deleted.
   *
   * @param data Pointer to the transaction id that
   *        will be contained in the node.
   *
   * @return Id of the newly created node.
   */
  inline NodeId addNode(TransactionId *data) {
    nodes_.emplace_back(data);
    return nodes_.size() - 1;
  }

  /**
   * @brief Adds an edge between nodes.
   * @warning Does not check arguments are legit.
   *          It may cause out of range errors.
   *
   * @param fromNode The node that edge is orginated.
   * @param toNode The node that edge is ended.
   */
  inline void addEdge(NodeId from_node, NodeId to_node) {
    nodes_[from_node].addOutgoingEdge(to_node);
  }

  /**
   * @brief Check whether there is a directed edge.
   * @warning Does not check argument are legit.
   *          It may cause out of range errors.
   *
   * @param fromNode Id of the node that edge is originated from.
   * @param toNode Id of the node that edge is ended.
   *
   * @return True if there is an edge, false otherwise.
   */
  inline bool hasEdge(NodeId from_node, NodeId to_node) const {
    return nodes_[from_node].hasOutgoingEdge(to_node);
  }

  /**
   * @brief Get data (transaction id) contained in the node.
   * @warning Does not check index validity.
   *
   * @param node Id of the node that the data is got from.
   * @return Id of the transaction that this node contains.
   */
  inline TransactionId getDataFromNode(NodeId node) const {
    return nodes_[node].getData();
  }

  /**
   * @brief Calculate how many nodes the graph has.
   *
   * @return The number of nodes the graph has.
   */
  inline std::size_t count() const {
    return nodes_.size();
  }

  /**
   * @brief Gives the node ids that this node has edges to.
   *
   * @param id Id of the corresponding node.
   * @return Vector of node ids that id has edges to.
   */
  inline std::vector<NodeId> getAdjacentNodes(NodeId id) const {
    return nodes_[id].getOutgoingEdges();
  }

 private:
  // Class for representing a graph node.
  class DirectedGraphNode {
   public:
    explicit DirectedGraphNode(TransactionId *data)
      : data_(data) {}

    inline void addOutgoingEdge(NodeId to_node) {
      outgoing_edges_.insert(to_node);
    }

    inline bool hasOutgoingEdge(NodeId to_node) const {
      return outgoing_edges_.count(to_node) == 1;
    }

    inline std::vector<NodeId> getOutgoingEdges() const {
      std::vector<NodeId> result;
      std::copy(outgoing_edges_.begin(), outgoing_edges_.end(),
                std::back_inserter(result));
      return result;
    }

    inline TransactionId getData() const {
      return *(data_.get());
    }

   private:
    // Owner pointer to transaction id.
    std::unique_ptr<TransactionId> data_;

    // Endpoint nodes of outgoing edges originated from this node.
    std::unordered_set<NodeId> outgoing_edges_;
  };

  // Buffer of nodes that are created. NodeId is the index of that
  // node in this buffer.
  std::vector<DirectedGraphNode> nodes_;

  DISALLOW_COPY_AND_ASSIGN(DirectedGraph);
};

/** @} */

}  // namespace transaction

}  // namespace quickstep

#endif
