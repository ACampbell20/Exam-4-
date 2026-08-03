#ifndef SMARTLIGHT_H
#define SMARTLIGHT_H

#include "Displayable.h"
#include <string>

class SmartLight : public Displayable
{
private:
    string brand;
    string room;
    int brightness;
    string color;
    bool isOn;

public:
    SmartLight(string b, string r, int bright,
               string c, bool on);

    void displayInfo() override;
};

#endif
