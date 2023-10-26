// course.cpp
#include "course.h"

Course::Course(const std::string& number, const std::string& name, const std::string& description)
    : number(number), name(name), description(description) {}

Course::~Course() {}

std::string Course::getNumber() const {
    return number;
}

std::string Course::getName() const {
    return name;
}

std::string Course::getDescription() const {
    return description;
}
