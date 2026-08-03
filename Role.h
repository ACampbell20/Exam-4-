#ifndef ROLE_H
#define ROLE_H

#include <iostream>
#include <string>
using namespace std;

class Role{
protected:
    string title;

public:
    Role();
    Role(string t);

    void setTitle(string t);
    string getTitle() const;

    virtual void performTask() = 0;

    virtual ~Role() {}
};

#endif
