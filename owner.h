#ifndef OWNER_H
#define OWNER_H

#include <iostream>
#include <string>
#include "person.h"

class Owner : public Person
{
protected:
    double ownerPercent;

    std::string category, ownerDate;

public:
    double GetOwnerPercent();
    void SetOwnerPercent(double x);
    std::string GetOwnerDate();
    bool SetOwnerDate(std::string x);

    std::string GetCategory();

    Owner();

    void Input(std::istream &in);
    void Display(std::ostream &out);
};

#endif