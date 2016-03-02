#ifndef QUICKSTEP_TRANSACTION_STRONGLY_CONNECTED_COMPONENTS_HPP_
#define QUICKSTEP_TRANSACTION_STRONGLY_CONNECTED_COMPONENTS_HPP_

#include <stack>
#include <vector>
#include <unordered_map>

#include "transaction/DirectedGraph.hpp"
#include "utility/Macros.hpp"

namespace quickstep {

namespace transaction {

/** \addtogroup Transaction
 *  @{
 */

/**
 * @brief Class for applying Tarjan's strongly connected components
 *        algorithm to the 
 **/
class StronglyConnectedComponents {
 public:
  /**
   * @brief Constructor for StronglyConnectedComponents.
   *
   * @param directed_graph Pointer to the directed graph which the 
   *        algortihm runs.
   **/
  explicit StronglyConnectedComponents(DirectedGraph *directed_graph);

  /**
   * @brief Enumaretes strongly connected components.
   * @info This method should be called before calling any other method.
   **/
  void findStronglyConnectedComponents();

  /**
   * @brief Getter for the component id of the node.
   *
   * @param node_id Id of the node in the graph.
   * @return Component id of the node.
   **/
  std::uint64_t getComponentId(DirectedGraph::NodeId node_id) const;

  /**
   * @brief Getter for total number of strongly connected components.
   * @warning This method should be called after findStronglyConnectedComponents().
   *
   * @return Total number of strongly connected components.
   **/
  std::uint64_t getTotalComponents() const;

  /**
   * @brief Gets a component id to list of node ids mapping.
   *
   * @return Mapping of component ids to list of nodes.
   **/
  std::unordered_map<std::uint64_t, std::vector<DirectedGraph::NodeId>> getComponentMapping() const;

 private:
  // Applies DFS to the node whic has id v.
  void depthFirstSearch(DirectedGraph::NodeId v);

  // Pointer to the graph.
  DirectedGraph *directed_graph_;

  // is_marked[v] == true if depth first search traversed the node with id v.
  std::vector<bool> is_marked_;

  // component_ids_[v] == i if strongly connected component
  // which the node with id is in, has id i.
  std::vector<std::uint64_t> component_ids_;

  // low_ids_[v] == i if lowest traversal id seen by the node v equals i.
  std::vector<std::uint64_t> low_ids_;

  // Keeps track of the nodes in the current traversal of the graph.
  std::stack<DirectedGraph::NodeId> stack_;

  // Keeps track of the current index number of depth first search traversal.
  std::uint64_t preorder_counter_;
  // Keeps track of the current number of the strongly connected component.
  std::uint64_t no_of_components_;

  DISALLOW_COPY_AND_ASSIGN(StronglyConnectedComponents);
};

/** @} */

}  // namespace transaction

}  // namespace quickstep

#endif
