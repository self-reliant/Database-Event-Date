//
// Created by Nuradil on 2/11/2022.
//

#include "date_comparison_node.h"

DateComparisonNode::DateComparisonNode(const Comparison& cmp, const Date& date)
  : cmp_(cmp)
  , date_(date) {
}

bool DateComparisonNode::Evaluate(const Date& date, const std::string& event) const {
  if (cmp_ == Comparison::Less)
    return date < date_;
  if (cmp_ == Comparison::LessOrEqual)
    return date <= date_;
  if (cmp_ == Comparison::Greater)
    return date > date_;
  if (cmp_ == Comparison::GreaterOrEqual)
    return date >= date_;
  if (cmp_ == Comparison::Equal)
    return date == date_;
  if (cmp_ == Comparison::NotEqual)
    return date != date_;
  throw std::logic_error("date comparison in evaluation failed");
}