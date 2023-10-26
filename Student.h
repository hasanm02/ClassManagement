// student.h
#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"
#include <string>
#include <vector>

class Course; 

class Student : public Person {
public:
    Student(const std::string& name, int age, int student_num);
    ~Student();
    void printname() const override;
    int getStudentNum() const;
    void printCourses() const;
    void addCourse(const Course& course);
    void deleteCourse(const Course& course);
    friend bool operator==(const Student& student1, const Student& student2);

private:
    int student_num;
    std::vector<Course> courses;
};

#endif // STUDENT_H
