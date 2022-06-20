/*
CH-230-A
a11_p3.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"
using namespace std;

int main()
{
    //creating objects of class and applying methods
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating the Batman.\n";
    Batman b;
    b.run();
    b.speed();

    cout << "\nCreating an Alien.\n";
    Alien a;
    a.run();
    a.alienfromsun();

    return 0;
}
