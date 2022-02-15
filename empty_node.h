//
// Created by Nuradil on 2/11/2022.
//

#pragma once

#include "node.h"

class EmptyNode : public Node {
public:
    EmptyNode();
    bool Evaluate(const Date&, const std::string&) const override;
};
