/*
CH-230-A
a12_p4.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(int argc, char** argv)
{
    Fraction firstInst, secondInst;

    cout << "Give 2 fractions to perform operations\n";
    // Enter data members of both instances using overloaded ">>"
    cin >> firstInst;
    cin >> secondInst;

    // Output multiplication and division between both fracs using
    // overloaded "*", "/
    cout << "Product: " << firstInst * secondInst << endl;
    cout << "Quotient: " << firstInst / secondInst << endl;

    return 0;
}
