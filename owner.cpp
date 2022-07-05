#include "owner.h"

double Owner::GetOwnerPercent()
{
    return ownerPercent;
}

void Owner::SetOwnerPercent(double x)
{
    ownerPercent = x;
}

std::string Owner::GetOwnerDate()
{
    return ownerDate;
}

bool Owner::SetOwnerDate(std::string x)
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

        ownerDate = tempString;
        rv = true;
    }
    else
    {
        std::cerr << "Invalid Input!" << std::endl;
    }
    return rv;
}

std::string Owner::GetCategory()
{
    return category;
}

Owner::Owner()
{
    ownerPercent = 0;
    ownerDate = "";

    category = "Owner";
}

void Owner::Input(std::istream &in)
{
    std::string n, d, ssn, bd, od;
    long i;
    double p;

    std::cout << "\nEnter Name: ";
    in >> n;
    SetName(n);

    do
    {
        std::cout << "Enter 9 digit Social Security Number (xxxxxxxxx): ";
        in >> ssn;
    } while (!SetSSN(ssn));

    do
    {
        std::cout << "Enter 8 digit Birth Date. 2 digits for the day, 2 digits for the month, 4 digits for the year (xxxxxxxx): ";
        in >> bd;
    } while (!SetBDate(bd));

    std::cout << "Enter Company Ownership Percentange: ";
    in >> p;
    SetOwnerPercent(p);

    do
    {
        std::cout << "Enter 8 digit Ownership Start Date. 2 digits for the day, 2 digits for the month, 4 digits for the year (xxxxxxxx): ";
        in >> od;
    } while (!SetOwnerDate(od));
};

void Owner::Display(std::ostream &out)
{
    out << "\nName: " << GetName() << std::endl;
    out << "Category: " << GetCategory() << std::endl;
    out << "SSN: " << GetSSN() << std::endl;
    out << "Birth Date: " << GetBDate() << std::endl;
    out << "Ownership Percentage: " << GetOwnerPercent() << "%" << std::endl;
    out << "Ownership Start Date: " << GetOwnerDate() << std::endl;
};