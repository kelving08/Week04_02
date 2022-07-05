#include <iostream>
#include <vector>
#include <algorithm>
#include "input.h"
#include "laborer.h"
#include "manager.h"
#include "owner.h"

class Company
{
protected:
    std::vector<Person *> personList;
    enum category
    {
        all,
        owners,
        managers,
        laborers
    };

public:
    void
    Menu();
    void Display(category x);
    void Sort();
};
