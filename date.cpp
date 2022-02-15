//
// Created by Nuradil on 2/11/2022.
//

#include "date.h"

Date ParseDate(std::istream& is) {
  Date date;
  is >> date;
  return date;
}

std::istream& operator >> (std::istream& is, Date& date) {
  is >> date.year_;
  is.ignore(1, '-');
  is >> date.month_;
  is.ignore(1, '-');
  is >> date.day_;
  return is;
}

std::ostream& operator << (std::ostream& os, const Date& date) {
  os << std::setw(4) << std::setfill('0') << date.year_ <<
     '-' << std::setfill('0') << std::setw(2) << date.month_ <<
     '-' << std::setfill('0') << std::setw(2) << date.day_;
  return os;
}

Date::Date(int year, int month, int day)
    : year_(year)
    , month_(month)
    , day_(day) {
}

Date::Date()
  : year_(-1)
  , month_(-1)
  , day_(-1) {
}

Date::Date(const Date& date)
  : year_(date.year_)
  , month_(date.month_)
  , day_(date.day_) {
}

bool Date::operator < (const Date &other) const {
  return std::tie(year_, month_, day_) < std::tie(other.year_, other.month_, other.day_);
}

bool Date::operator == (const Date& other) const {
  return (year_ == other.year_ && month_ == other.month_ && day_ == other.day_);
}

bool Date::operator <= (const Date& other) const {
  return (*this < other || *this == other);
}

bool Date::operator > (const Date& other) const {
  return !(*this <= other);
}

bool Date::operator >= (const Date& other) const {
  return (*this > other || *this == other);
}

bool Date::operator != (const Date& other) const {
  return !(*this == other);
}

std::string Date::ToString() const {
  std::ostringstream os;
  os << *this;
  return os.str();
}