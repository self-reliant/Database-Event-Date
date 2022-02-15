//
// Created by Nuradil on 2/11/2022.
//

#include "event_comparison_node.h"

EventComparisonNode::EventComparisonNode(const Comparison& cmp, const std::string& event)
  : cmp_(cmp)
  , event_(event) {
}

bool EventComparisonNode::Evaluate(const Date& date, const std::string& event) const {
  if (cmp_ == Comparison::Less)
    return event < event_;
  if (cmp_ == Comparison::LessOrEqual)
    return event <= event_;
  if (cmp_ == Comparison::Greater)
    return event > event_;
  if (cmp_ == Comparison::GreaterOrEqual)
    return event >= event_;
  if (cmp_ == Comparison::Equal)
    return event == event_;
  if (cmp_ == Comparison::NotEqual)
    return event != event_;
  throw std::logic_error("event comparison in evaluation failed");
}