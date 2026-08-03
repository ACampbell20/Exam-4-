#include "SmartWatch.h"

SmartWatch::SmartWatch(string b, vector<int> logs)
{
    brand = b;
    stepLogs = logs;
}

void SmartWatch::displayInfo()
{
    cout << brand << " SmartWatch Log:" << endl;

    for (int i = 0; i < stepLogs.size(); i++)
    {
        cout << " Day " << i + 1 << " Steps: " << stepLogs[i] << endl;
    }
}
