/*
CH-230-A
a10_p4.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char **argv)
{
    //instances of critter
    //last constructor used twice
    Critter one;
    Critter two("Sohaib");
    Critter three("Sohaib", 2, 7);
    Critter four("Sohaib", 2, 7, 5.9);

    one.setHunger(2);
    one.print();

    two.setHunger(2);
    two.print();

    three.print();

    four.print();

    return 0;

}
