#pragma once

#include "token.h"
#include "logical_operation_node.h"
#include "date_comparison_node.h"
#include "event_comparison_node.h"
#include "empty_node.h"

std::shared_ptr<Node> ParseCondition(std::istream& is);

void TestParseCondition();