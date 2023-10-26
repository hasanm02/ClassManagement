#include <iostream>
#include <vector>
#include "person.h"
#include "student.h"
#include "teacher.h"
#include "course.h"

int main() {
    // Initialize courses
    Course course1("CSCI101", "Introduction to Programming", "Fundamentals of programming");
    Course course2("CSCI202", "Data Structures", "Advanced data structures");
    Course course3("MATH101", "Calculus", "Basic calculus");
    Course course4("PHYS101", "Physics", "General physics");
    Course course5("CHEM101", "Chemistry", "Basic chemistry");

    // Initialize persons
    Person person1("Alice", 25);
    Person person2("Bob", 30);
    Person person3("Carol", 35);

    // Initialize students
    Student student1("David", 20, 1001);
    Student student2("Eva", 22, 1002);
    Student student3("Frank", 21, 1003);

    // Initialize teachers
    Teacher teacher1("Grace", 40, 50000.0);
    Teacher teacher2("Hank", 45, 55000.0);
    Teacher teacher3("Ivy", 38, 48000.0);

    // Students courses
    student1.addCourse(course1);
    student1.addCourse(course2);
    student2.addCourse(course1);
    student2.addCourse(course3);
    student3.addCourse(course4);
    student3.addCourse(course5);

    // Courses taught by teachers
    teacher1.addCourse(course1);
    teacher1.addCourse(course2);
    teacher2.addCourse(course3);
    teacher2.addCourse(course4);
    teacher3.addCourse(course5);

    // Virtual functions
    std::vector<Person*> people;
    people.push_back(&person1);
    people.push_back(&student1);
    people.push_back(&teacher1);

    for (const Person* person : people) {
        person->printname();
    }

    // Print out all information
    std::cout << "\nStudent Information:\n";
    student1.printname();
    student1.printCourses();
    student2.printname();
    student2.printCourses();
    student3.printname();
    student3.printCourses();

    std::cout << "\nTeacher Information:\n";
    teacher1.printname();
    teacher1.printCourses();
    teacher2.printname();
    teacher2.printCourses();
    teacher3.printname();
    teacher3.printCourses();

    return 0;
}
