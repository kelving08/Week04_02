#ifndef LABORER_H
#define LABORER_H

#include <iostream>
#include <string>
#include <iomanip>
#include "person.h"

class Laborer : public Person
{
protected:
    std::string job;
    long id;
    double hourly, salary, hours;

    std::string category;

public:
    std::string GetJob();
    void SetJob(std::string x);
    long GetId();
    void SetId(long x);
    double GetHourly();
    void SetHourly(double x);
    double GetSalary();
    void SetSalary(double x);
    double GetHours();
    void SetHours(double x);

    std::string GetCategory();

    Laborer();

    void Input(std::istream &in);
    void Display(std::ostream &out);
};

#endif