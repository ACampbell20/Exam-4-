#ifndef SMARTWATCH_H
#define SMARTWATCH_H

#include "Displayable.h"
#include <vector>
#include <string>

class SmartWatch : public Displayable
{
private:
    string brand;
    vector<int> stepLogs;

public:
    SmartWatch(string b, vector<int> logs);

    void displayInfo() override;
};

#endif
