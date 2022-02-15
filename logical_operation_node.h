//
// Created by Nuradil on 2/11/2022.
//

#pragma once

#include "node.h"

enum class LogicalOperation {
    Or,
    And
};

class LogicalOperationNode : public Node {
public:
    LogicalOperationNode(const LogicalOperation&, const std::shared_ptr<Node>&, const std::shared_ptr<Node>&);
    bool Evaluate(const Date&, const std::string&) const override;
private:
    LogicalOperation logical_operation_;
    std::shared_ptr<Node> left_;
    std::shared_ptr<Node> right_;
};