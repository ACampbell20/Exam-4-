#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Developer.h"
#include "Manager.h"
#include "Employee.h"

using namespace std;

int main()
{
    srand(time(0));

    Developer developer;
    Manager manager("Engineering");

    Employee emp1("Alice", &developer);
    Employee emp2("Bob", &manager);

    emp1.work();
    emp2.work();
}
