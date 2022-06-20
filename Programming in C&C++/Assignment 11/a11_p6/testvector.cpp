/*
CH-230-A
a11_p6.c++
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include "Vector.h"

using namespace std;

int main(int argc, char** argv)
{
    double *fComp = new double[5] {3, 2, 7, 4, 5};
    double *tComp = new double[5] {5, 3, 8, 4, 5};

    Vector fInst;
    cout << "Components of first Vector: ";
    fInst.printComp();

    // Instance created using default constructor
    Vector sInst;
    sInst.setPtr(fComp);
    sInst.setSize(5);
    cout << "Components of second Vector: ";
    sInst.printComp();

    // Instance created using copy constructor
    Vector tInst(sInst);
    cout << "Component of third Vector (copy constructed): ";
    tInst.printComp();

    // Instance created using parametric constructor
    Vector fourInst(tComp, 5);
    cout << "Component of fourth Vector: ";
    fourInst.printComp();

    cout << "Norm of second Vector: "
              << sInst.norm()
              << endl;

    cout << "Scalar Product of second and fourth Vector: "
              << sInst.scalarProduct(fourInst)
              << endl;

    cout << "Sum of second and fourth Vector: ";
    (sInst.add(fourInst)).printComp();

    cout << "Difference of second and fourth Vector: ";
    (sInst.subtract(fourInst)).printComp();

    return 0;
}
