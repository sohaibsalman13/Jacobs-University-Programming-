/*
CH-230-A
a11_p4.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"
using namespace std;

int main()
{
    //taking first input
    string input;
    getline(cin, input);

    //only exit if quit is entered
    while (input != "quit")
    {
        //dyn creating wizard
        if (input == "wizard")
        {
            cout << "Creating an Wizard."<<endl;
            Wizard *w = new Wizard;
            (*w).run();
            (*w).hover();
            delete w;
        }

        //dyn creating batman
        if (input == "object1")
        {
             cout << "Creating the Batman."<<endl;
             Batman *b = new Batman;
             (*b).run();
             (*b).speed();
             delete b;
        }

        //dyn creating alien
         if (input == "object2")
        {
             cout << "Creating an Alien."<<endl;
             Alien *a = new Alien;
             (*a).run();
             (*a).alienfromsun();
             delete a;
        }
        //next input
        getline(cin, input);
    }

    return 0;
}
