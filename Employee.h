#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Role.h"

using namespace std;

class Employee
{
private:
    string name;
    Role* role;

public:
    Employee();
    Employee(string n, Role* r);

    void setName(string n);
    string getName() const;

    void setRole(Role* r);
    Role* getRole() const;

    void work();
};

#endif
