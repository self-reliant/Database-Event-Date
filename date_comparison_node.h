//
// Created by Nuradil on 2/11/2022.
//

#pragma once

#include "date.h"
#include "comparison.h"
#include "node.h"

class DateComparisonNode : public Node {
public:
    DateComparisonNode(const Comparison& cmp, const Date& date);
    bool Evaluate(const Date&, const std::string&) const override;
private:
    Comparison cmp_;
    Date date_;
};

