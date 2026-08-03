#include "Manager.h"

Manager::Manager(string dept) : Role("Manager")
{
    department = dept;
}

void Manager::setDepartment(string dept)
{
    department = dept;
}

string Manager::getDepartment() const
{
    return department;
}

void Manager::performTask()
{
    cout << ", the " << getTitle()
         << ", holds a status meeting for the "
         << department << " department." << endl;
}
