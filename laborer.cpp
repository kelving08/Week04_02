#include "laborer.h"

std::string Laborer::GetJob()
{
    return job;
}

void Laborer::SetJob(std::string x)
{
    job = x;
}

long Laborer::GetId()
{
    return id;
}

void Laborer::SetId(long x)
{
    id = x;
}

double Laborer::GetHourly()
{
    return hourly;
}

void Laborer::SetHourly(double x)
{
    hourly = x;
}

double Laborer::GetSalary()
{
    return salary;
}

void Laborer::SetSalary(double x)
{
    salary = x;
}

double Laborer::GetHours()
{
    return hours;
}

void Laborer::SetHours(double x)
{
    hours = x;
}

std::string Laborer::GetCategory()
{
    return category;
}

Laborer::Laborer()
{
    job = "";
    id = 0;
    hourly = 0;
    salary = 0;
    hours = 0;

    category = "Laborer";
}

void Laborer::Input(std::istream &in)
{
    std::string n, j, ssn, bd;
    long i;
    double h, hrs;

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

    std::cout << "Enter the job: ";
    in >> j;
    SetJob(j);

    std::cout << "Enter employee ID: ";
    in >> i;
    SetId(i);

    std::cout << "Enter hourly rate: ";
    in >> h;
    SetHourly(h);
    SetSalary(h * 40 * 52);

    std::cout << "Enter hours worked: ";
    in >> hrs;
    SetHours(hrs);
};

void Laborer::Display(std::ostream &out)
{
    out << "\nName: " << GetName() << std::endl;
    out << "Category: " << GetCategory() << std::endl;
    out << "SSN: " << GetSSN() << std::endl;
    out << "Birth Date: " << GetBDate() << std::endl;
    out << "Job: " << GetJob() << std::endl;
    out << "Employee ID: " << std::fixed << GetId() << std::endl;
    out << "Hourly Rate: "
        << "$" << GetHourly() << " per hour" << std::endl;
    out << "Salary (Base on Hourly Rate): "
        << "$" << std::fixed << std::setprecision(2) << GetSalary() << " per year" << std::endl;
    out << "Hours Worked: " << GetHours() << " hours" << std::endl;
};