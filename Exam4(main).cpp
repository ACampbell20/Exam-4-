#include <iostream>
#include <vector>

#include "Displayable.h"
#include "SmartWatch.h"
#include "Thermostat.h"
#include "SmartLight.h"

using namespace std;

int main()
{
    vector<int> steps = {5234, 7812, 10015};

    Displayable* devices[3];

    devices[0] = new SmartWatch("Apple", steps);
    devices[1] = new Thermostat("Nest", 69.5, 72.0, "Heat", true);
    devices[2] = new SmartLight("Philips Hue", "Living Room", 80, "Warm White", true);

    for (int i = 0; i < 3; i++)
    {
        devices[i]->displayInfo();
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        delete devices[i];
    }
}
