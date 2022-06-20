/*
CH-230-A
a12_p5.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(int argc, char** argv)
{
    bool comparisonResult;
    Fraction firstInst, secondInst, sum, diff;

    cout << "Give 2 fractions to perform operations\n";
    // Enter data members of both instances using overloaded ">>"
    cin >> firstInst;
    cin >> secondInst;

    comparisonResult = firstInst.operator>(secondInst);

    if (comparisonResult == 1)
    {
        cout << "Bigger fraction is: "
             << firstInst
             << endl;
    }
    else
    {
        cout << "Bigger fraction is: "
             << secondInst
             << endl;
    }

    sum = firstInst + secondInst;
    diff = firstInst - secondInst;

    cout << "Sum of fractions is: "
         << sum
         << "\nDifference of fractions is: "
         << diff
         << endl;


    return 0;
}
