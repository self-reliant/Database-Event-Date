//
// Created by Nuradil on 2/11/2022.
//

#pragma once

#include "date.h"

class Node {
public:
    virtual bool Evaluate(const Date&, const std::string&) const = 0;
    Node();
};