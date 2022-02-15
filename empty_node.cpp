//
// Created by Nuradil on 2/11/2022.
//

#include "empty_node.h"

EmptyNode::EmptyNode() {}
bool EmptyNode::Evaluate(const Date& date, const std::string& event) const {
  return true;
}