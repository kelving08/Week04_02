#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person
{
protected:
    std::string name, SSN, bDate;

public:
    std::string GetName();
    void SetName(std::string x);
    std::string GetSSN();
    bool SetSSN(std::string x);
    std::string GetBDate();
    bool SetBDate(std::string x);
    virtual std::string GetCategory() = 0;

    Person();

    virtual void Input(std::istream &in) = 0;
    virtual void Display(std::ostream &out) = 0;
};

#endif