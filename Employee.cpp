#include "Employee.h"
#include <iostream>

Employee::Employee()
{
    name = "";
    role = nullptr;
}

Employee::Employee(string n, Role* r)
{
    name = n;
    role = r;
}

void Employee::setName(string n)
{
    name = n;
}

string Employee::getName() const
{
    return name;
}

void Employee::setRole(Role* r)
{
    role = r;
}

Role* Employee::getRole() const
{
    return role;
}

void Employee::work()
{
    cout << name;
    if (role != nullptr)
    {
        role->performTask();
    }
}
