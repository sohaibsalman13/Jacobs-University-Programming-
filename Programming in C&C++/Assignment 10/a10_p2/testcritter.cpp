/*
CH-230-A
a10_p2.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
    Critter c;

    string name;
    int hunger;
    int boredom;
    double height;

    //calling new methods
    cout << endl << "Please enter data: " << endl;
    cout << "Name: ";
    getline(cin, name);
    c.setName(name);
    cout << "Hunger: ";
    cin >> hunger;
    c.setHunger(hunger);
    cout << "Height: ";
    cin >> height;
    c.setHeight(height);
    cout << "Boredom: ";
    cin >> boredom;
    c.setBoredom(boredom);

    cout << "You have created:" << endl;
    c.print();
    return 0;
}
