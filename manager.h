#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include <string>
#include <iomanip>
#include "person.h"

class Manager : public Person
{
protected:
    std::string department;
    long id;
    double salary;

    std::string category;

public:
    std::string GetDepartment();
    void SetDepartment(std::string x);
    long GetId();
    void SetId(long x);
    double GetSalary();
    void SetSalary(double x);

    std::string GetCategory();

    Manager();

    void Input(std::istream &in);
    void Display(std::ostream &out);
};

#endif