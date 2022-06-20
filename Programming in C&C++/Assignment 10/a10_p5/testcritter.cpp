/*
CH-230-A
a10_p5.[c++]
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
    one.setHunger(2);
    one.print();

    Critter two("Sohaib");
    two.setHunger(2);
    two.print();

    Critter three("Sohaib", 2, 7);
    three.print();

    Critter four("Sohaib", 2, 7, 5.9);
    four.print();

    return 0;

}
