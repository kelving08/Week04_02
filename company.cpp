#include "company.h"

void Company::Display(category x)
{
    switch (x)
    {
    case all:
        if (personList.empty())
        {
            std::cout << "List is empty\n";
        }
        else
        {
            long len = personList.size();
            for (long i = 0; i < len; i++)
            {
                personList[i]->Display(std::cout);
                std::cout << std::endl;
            }
        }
        break;

    case owners:
    {
        if (personList.empty())
        {
            std::cout << "List is empty\n";
        }
        else
        {
            std::vector<Person *> temp = personList;
            std::vector<Person *>::iterator pos = remove(temp.begin(), temp.end(), Owner::GetCategory());
            temp.erase(temp.begin(), pos - 1);

            long len = temp.size();
            for (long i = 0; i < len; i++)
            {
                temp[i]->Display(std::cout);
                std::cout << std::endl;
            }
        }
    }
    break;

    case managers:

        if (personList.empty())
        {
            std::cout << "List is empty\n";
        }
        else
        {
            std::vector<Person *> temp = personList;
            std::vector<Person *>::iterator pos = remove(temp.begin(), temp.end(), new Manager);
            temp.erase(temp.begin(), pos - 1);

            long len = temp.size();
            for (long i = 0; i < len; i++)
            {
                temp[i]->Display(std::cout);
                std::cout << std::endl;
            }
        }
        break;

    case laborers:
        if (personList.empty())
        {
            std::cout << "List is empty\n";
        }
        else
        {
            std::vector<Person *> temp = personList;
            std::vector<Person *>::iterator pos = remove(temp.begin(), temp.end(), Laborer);
            temp.erase(temp.begin(), pos - 1);

            long len = temp.size();
            for (long i = 0; i < len; i++)
            {
                temp[i]->Display(std::cout);
                std::cout << std::endl;
            }
        }
        break;
    }
}

void Company::Sort()
{

    // sort(personList.begin(), personList.end(), personList[]->GetName());
}

void Company::Menu()
{
    int choice = 0;
    int personSelection = 0;
    int displaySelection = 0;

    do
    {
        choice = ReadValue<int>("\n1. Add Person\n2. Display List\n3. Sort List\n4. Quit\n\nEnter your Selection: ", 1, 4);
        switch (choice)
        {
        case 1:
        {
            personSelection = ReadValue<int>("\n1. Owner\n2. Manager\n3. Laborer\n4. Main menu\n\nEnter your Selection: ", 1, 4);
            switch (personSelection)
            {
            case 1:
                personList.push_back(new Owner);
                personList[personList.size() - 1]->Input(std::cin);
                break;

            case 2:
                personList.push_back(new Manager);
                personList[personList.size() - 1]->Input(std::cin);
                break;

            case 3:
                personList.push_back(new Laborer);
                personList[personList.size() - 1]->Input(std::cin);
                break;

            case 4:
                std::cout << "\n--Main Menu--\n";
                break;
            }
        }
        break;

        case 2:
        {
            displaySelection = ReadValue<int>("\n1. All\n2. Owners\n3. Managers\n4. Laborers\n5. Main Menu\n\nEnter your Selection: ", 1, 5);
            switch (displaySelection)
            {

            case 1:
                Display(all);
                break;

            case 2:
                Display(owners);
                break;

            case 3:
                Display(managers);
                break;

            case 4:
                Display(laborers);
                break;

            case 5:
                std::cout << "\n--Main Menu--\n";
                break;
            }
            break;
        }
        case 3:
            Sort();
            break;

        case 4:
            std::cout << "Goodbye!\n";
            break;
        }
    } while (choice != 4);
}