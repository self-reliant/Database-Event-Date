//
// Created by Nuradil on 2/11/2022.
//

#pragma once

#include "date.h"

class Database {
public:
    void Add(const Date&, const std::string&);
    void Print(std::ostream&) const;
    int RemoveIf(const std::function<bool(const Date&, const std::string&)>&);
    std::vector<std::string> FindIf(const std::function<bool(const Date&, const std::string&)>&) const;
    std::string Last(const Date&) const;
private:
  std::map<Date, std::vector<std::string>> events_;
  std::map<Date, std::unordered_set<std::string>> uniques_;
};