//
// Created by Nuradil on 2/11/2022.
//

#pragma once

#include "comparison.h"
#include "node.h"

class EventComparisonNode : public Node {
public:
    EventComparisonNode(const Comparison& cmp, const std::string& event);
    bool Evaluate(const Date&, const std::string&) const override;
private:
    Comparison cmp_;
    std::string event_;
};
