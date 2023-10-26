// person.cpp
#include "person.h"
#include <iostream>

Person::Person(const std::string& name, int age) : name(name), age(age) {}

Person::~Person() {}

void Person::printname() const {
    std::cout << "This is " << name << std::endl;
}

std::string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}
