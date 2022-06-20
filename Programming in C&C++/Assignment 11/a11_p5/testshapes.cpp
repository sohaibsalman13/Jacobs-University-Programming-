/*
CH-230-A
a11_p4.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/


#include <iostream>
#include "Shapes.h"

using namespace std;

int main(int argc, char** argv)
{
    Circle c("first circle", 5, 4, 8);
    RegularPolygon p("TRIANGLE", 2, 2, 5);

    p.printName();
    c.printName();

    Circle A("Instance Circle ", 6, 9, 3);
    Rectangle B("Instance Rectangle ", 3, 4, 2, 5);
    Square C("Instance Square ", 8, 6, 5);

    cout << "Name: ";
    A.printName();
    cout << "Perimeter: "
              << A.perimeter()
              << "\nArea: "
              << A.area()
              << "\nName: ";
    B.printName();
    cout << "Perimeter: "
              << B.perimeter()
              << "\nArea: "
              << B.area()
              << "\nName: ";
    C.printName();
    cout << "Perimeter: "
              << C.perimeter()
              << "\nArea: "
              << C.area()
              << endl;

    return 0;
}
