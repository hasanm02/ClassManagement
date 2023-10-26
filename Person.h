// person.h
#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
    Person(const std::string& name, int age);
    virtual ~Person();
    virtual void printname() const;
    std::string getName() const;
    int getAge() const;

private:
    std::string name;
    int age;
};

#endif // PERSON_H
