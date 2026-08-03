#include "Thermostat.h"

Thermostat::Thermostat(string b, double current, double target,
                       string m, bool heating)
{
    brand = b;
    currentTemp = current;
    targetTemp = target;
    mode = m;
    isHeating = heating;
}

void Thermostat::displayInfo()
{
    cout << brand << " Thermostat - Mode: " << mode
         << " | Current: " << currentTemp << "°F"
         << " | Target: " << targetTemp << "°F"
         << " | Status: ";

    if (isHeating)
        cout << "Heating";
    else
        cout << "Idle";

    cout << endl;
}
