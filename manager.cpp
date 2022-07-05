#include "manager.h"

std::string Manager::GetDepartment()
{
    return department;
}

void Manager::SetDepartment(std::string x)
{
    department = x;
}

long Manager::GetId()
{
    return id;
}

void Manager::SetId(long x)
{
    id = x;
}

double Manager::GetSalary()
{
    return salary;
}

void Manager::SetSalary(double x)
{
    salary = x;
}

std::string Manager::GetCategory()
{
    return category;
}

Manager::Manager()
{
    department = "";
    id = 0;
    salary = 0;

    category = "Manager";
}

void Manager::Input(std::istream &in)
{
    std::string n, d, ssn, bd;
    long i;
    double s;

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

    std::cout << "Enter the Department: ";
    in >> d;
    SetDepartment(d);

    std::cout << "Enter employee ID: ";
    in >> i;
    SetId(i);

    std::cout << "Enter Salary: ";
    in >> s;
    SetSalary(s);
};

void Manager::Display(std::ostream &out)
{
    out << "\nName: " << GetName() << std::endl;
    out << "Category: " << GetCategory() << std::endl;
    out << "SSN: " << GetSSN() << std::endl;
    out << "Birth Date: " << GetBDate() << std::endl;
    out << "Department: " << GetDepartment() << std::endl;
    out << "Employee ID: " << std::fixed << GetId() << std::endl;
    out << "Salary: "
        << "$" << std::fixed << std::setprecision(2) << GetSalary() << " per year" << std::endl;
};