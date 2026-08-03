#ifndef MANAGER_H
#define MANAGER_H

#include "Role.h"

class Manager : public Role
{
private:
    string department;

public:
    Manager(string dept = "General");

    void setDepartment(string dept);
    string getDepartment() const;

    void performTask() override;
};

#endif
