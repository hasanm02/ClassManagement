// teacher.cpp
#include "teacher.h"
#include "course.h"
#include <iostream>

Teacher::Teacher(const std::string& name, int age, double salary)
    : Person(name, age), salary(salary) {}

Teacher::~Teacher() {}

void Teacher::printname() const {
    std::cout << "This is teacher " << getName() << std::endl;
}

double Teacher::getSalary() const {
    return salary;
}

void Teacher::printCourses() const {
    std::cout << "Courses taught by teacher " << getName() << ":" << std::endl;
    for (const Course& course : courses) {
        std::cout << "  - " << course.getName() << std::endl;
    }
}

void Teacher::addCourse(const Course& course) {
    courses.push_back(course);
}
