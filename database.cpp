//
// Created by Nuradil on 2/11/2022.
//

#include "database.h"

void Database::Add(const Date& date, const std::string& event) {
  if (!uniques_[date].count(event)) {
    events_[date].push_back(event);
    uniques_[date].insert(event);
  }
}

void Database::Print(std::ostream& os) const {
  for (const auto& [date, events_list] : events_) {
    for (const auto& event : events_list) {
      os << date << " " << event << '\n';
    }
  }
}

int Database::RemoveIf(const std::function<bool(const Date&, const std::string&)>& predicate) {
  std::map<Date, std::vector<std::string>> new_events;
  uniques_.clear();
  int count = 0;
  for (const auto& [date, events_list] : events_) {
    for (const auto& event : events_list) {
      if (!predicate(date, event)) {
        if (!uniques_[date].count(event)) {
          new_events[date].push_back(event);
          uniques_[date].insert(event);
        }
      } else {
        count++;
      }
    }
  }
  events_ = std::move(new_events);
  return count;
}

std::vector<std::string> Database::FindIf(const std::function<bool(const Date&, const std::string&)>& predicate) const {
  std::vector<std::string> ans;
  for (const auto& [date, events_list] : events_) {
    for (const auto& event : events_list) {
      if (predicate(date, event)) {
        ans.push_back(date.ToString() + " " + event);
      }
    }
  }
  return ans;
}

std::string Database::Last(const Date& date) const {
  auto it = events_.upper_bound(date);
  if (it == begin(events_)) {
    throw std::invalid_argument("no entries");
  }
  --it;
  return it->first.ToString() + " " + it->second.back();
}