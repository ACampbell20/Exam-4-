#ifndef DISPLAYABLE_H
#define DISPLAYABLE_H

#include <iostream>
using namespace std;

class Displayable
{
public:
    virtual void displayInfo() = 0;

    virtual ~Displayable() {}
};

#endif
