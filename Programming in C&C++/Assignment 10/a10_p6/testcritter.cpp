/*
CH-230-A
a10_p6.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Crittter.h"

using namespace std;

int main(int argc, char **argv)
{
    //instances of critter
    //last constructor used twice
    Critter one;
    Critter two("Sohaib");
    Critter three("Sohaib", 2, 7);
    Critter four("Sohaib", 2, 7, 5.9);
    Critter five("Sohaib", 2, 7, 5.9, 12.4);

    one.setHunger(2);
    one.print();

    two.setHunger(2);
    two.print();

    three.print();

    four.print();

    five.print();

    return 0;

}
