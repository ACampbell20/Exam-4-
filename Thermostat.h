#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include "Displayable.h"
#include <string>

class Thermostat : public Displayable
{
private:
    string brand;
    double currentTemp;
    double targetTemp;
    string mode;
    bool isHeating;

public:
    Thermostat(string b, double current, double target,
               string m, bool heating);

    void displayInfo() override;
};

#endif
