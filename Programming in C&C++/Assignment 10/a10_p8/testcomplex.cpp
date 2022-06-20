/*
CH-230-A
a10_p8.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Complex.h"

using namespace std;

int main(int argc, char **argv)
{
    int real, imag;
    Complex num1, num2, num3;

    cout << "Enter first num"<<endl;
    cout << "Real: "<<endl;
    cin >> real;
    cout << "Imaginary: "<<endl;
    cin >> imag;

    //setting first num
    num1.setReal(real);
    num1.setImag(imag);

    cout << "Enter second num"<<endl;
    cout << "Real: "<<endl;
    cin >> real;
    cout << "Imaginary: "<<endl;
    cin >> imag;

    //setting second num
    num2.setReal(real);
    num2.setImag(imag);

    cout << "Conjugate of first number is "<<endl;
    num3 = num1.conjugate();
    num3.print();


    cout << "Sum of the two numbers is "<<endl;
    num3 = num1.add(num2);
    num3.print();

    cout << "Subtraction of two numbers is "<<endl;
    num3 = num2.sub(num1);
    num3.print();

    cout << "Product of the two numbers is "<<endl;
    num3 = num1.mul(num2);
    num3.print();


    return 0;


}
