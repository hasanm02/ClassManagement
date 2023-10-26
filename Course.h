// course.h
#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course {
public:
    Course(const std::string& number, const std::string& name, const std::string& description);
    ~Course();
    std::string getNumber() const;
    std::string getName() const;
    std::string getDescription() const;

private:
    std::string number;
    std::string name;
    std::string description;
};

#endif // COURSE_H
