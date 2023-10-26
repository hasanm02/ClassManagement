// teacher.h
#ifndef TEACHER_H
#define TEACHER_H

#include "person.h"
#include "course.h"
#include <string>
#include <vector>

class Teacher : public Person {
public:
    Teacher(const std::string& name, int age, double salary);
    ~Teacher();
    void printname() const override;
    double getSalary() const;
    void printCourses() const;
    void addCourse(const Course& course);

private:
    double salary;
    std::vector<Course> courses;
};

#endif // TEACHER_H
