// student.cpp
#include "student.h"
#include "course.h"
#include <iostream>

Student::Student(const std::string& name, int age, int student_num)
    : Person(name, age), student_num(student_num) {}

Student::~Student() {}

void Student::printname() const {
    std::cout << "This is student " << getName() << std::endl;
}

int Student::getStudentNum() const {
    return student_num;
}

void Student::printCourses() const {
    std::cout << "Courses for student " << getName() << ":" << std::endl;
    for (const Course& course : courses) {
        std::cout << "  - " << course.getName() << std::endl;
    }
}

void Student::addCourse(const Course& course) {
    courses.push_back(course);
}

void Student::deleteCourse(const Course& course) {
    
}

bool operator==(const Student& student1, const Student& student2) {
   
    return false;
}
