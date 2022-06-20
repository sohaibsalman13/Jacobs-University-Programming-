/*
CH-230-A
a12_p1.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

int main(int argc, char** argv)
{
    //creating three instances
    Hexagon fInst("1st Hexagon", 6, 6, 4, 9, "Blue");
    Hexagon sInst("2nd Hexagon", 4, 3, 10, 15, "Green");
    Hexagon tInst(sInst);

    std::cout << "Name: ";
    fInst.printName();
    std::cout << "Perimeter: "
              << fInst.perimeter()
              << "\nArea: "
              << fInst.area()
              << std::endl;

    std::cout << "Name: ";
    sInst.printName();
    std::cout << "Perimeter: "
              << sInst.perimeter()
              << "\nArea: "
              << sInst.area()
              << std::endl;

    std::cout << "Name: 3rd Hexagon"<<std::endl;

    std::cout << "Perimeter: "
              << tInst.perimeter()
              << "\nArea: "
              << tInst.area()
              << std::endl;

    return 0;
}
