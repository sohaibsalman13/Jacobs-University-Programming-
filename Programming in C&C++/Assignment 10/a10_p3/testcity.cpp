/*
CH-230-A
a10_p3.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "City.h"

using namespace std;

int main(int argc, char** argv)
{
    //instances of class
    City Bremen;
    City Paris;
    City London;


    //calling methods
    Bremen.setName("Bremen");
    Bremen.setMayor("Andreas Bovenschulte");
    Bremen.setInhabitants(569352);
    Bremen.setArea(326.7);

    Paris.setName("Paris");
    Paris.setMayor("Anne Hidalgo");
    Paris.setInhabitants(2161000);
    Paris.setArea(105.4);

    London.setName("London");
    London.setMayor("Sadiq Khan");
    London.setInhabitants(8982000);
    London.setArea(1572);

    Bremen.print();
    Paris.print();
    London.print();

    return 0;





}
