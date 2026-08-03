#include "SmartLight.h"

SmartLight::SmartLight(string b, string r, int bright,
                       string c, bool on)
{
    brand = b;
    room = r;
    brightness = bright;
    color = c;
    isOn = on;
}

void SmartLight::displayInfo()
{
    cout << brand << " SmartLight in " << room
         << " - Power: ";

    if (isOn)
        cout << "ON";
    else
        cout << "OFF";

    cout << " | Color: " << color
         << " | Brightness: " << brightness << "%"
         << endl;
}
