#include "person.h"

std::string Person::GetName()
{
    return name;
}

void Person::SetName(std::string x)
{
    name = x;
}

std::string Person::GetSSN()
{
    return SSN;
}

bool Person::SetSSN(std::string x)
{
    bool rv = false;
    if (x.length() == 9)
    {
        std::string tempString;

        tempString = x.substr(0, 3);
        tempString += "-";
        tempString += x.substr(3, 2);
        tempString += "-";
        tempString += x.substr(5, 4);

        SSN = tempString;
        rv = true;
    }
    else
    {
        std::cerr << "Invalid Input!" << std::endl;
    }
    return rv;
}

std::string Person::GetBDate()
{
    return bDate;
}

bool Person::SetBDate(std::string x)
{
    bool rv = false;
    if (x.length() == 8)
    {
        std::string tempString;

        tempString = x.substr(0, 2);
        tempString += "-";
        tempString += x.substr(2, 2);
        tempString += "-";
        tempString += x.substr(4, 4);

        bDate = tempString;
        rv = true;
    }
    else
    {
        std::cerr << "Invalid Input!" << std::endl;
    }
    return rv;
}

Person::Person()
{
    std::string name = "", SSN = "", bDate = "";
}