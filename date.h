//
// Created by Nuradil on 2/11/2022.
//

#pragma once

#include <bits/stdc++.h>

class Date {
public:
    Date();
    Date(int year, int month, int day);
    Date(const Date& date);

    bool operator < (const Date& other) const;
    bool operator == (const Date& other) const;
    bool operator <= (const Date& other) const;
    bool operator > (const Date& other) const;
    bool operator >= (const Date& other) const;
    bool operator != (const Date& other) const;

    friend std::istream& operator >> (std::istream& is, Date& date);
    friend std::ostream& operator << (std::ostream& os, const Date& date);
    std::string ToString() const;

private:
    int year_;
    int month_;
    int day_;
};

Date ParseDate(std::istream& is);