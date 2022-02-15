//
// Created by Nuradil on 2/11/2022.
//

#include "logical_operation_node.h"

LogicalOperationNode::LogicalOperationNode(const LogicalOperation& logical_operation,
                                           const std::shared_ptr<Node>& left,
                                           const std::shared_ptr<Node>& right)
                                           : logical_operation_(logical_operation)
                                           , left_(left)
                                           , right_(right) {
}

bool LogicalOperationNode::Evaluate(const Date& date, const std::string& event) const {
  bool left_res = left_->Evaluate(date, event);
  bool right_res = right_->Evaluate(date, event);
  if (logical_operation_ == LogicalOperation::And)
    return (left_res && right_res);
  else
    return (left_res || right_res);
}
