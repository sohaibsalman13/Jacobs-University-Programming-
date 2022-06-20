/*
CH-230-A
a10_p8.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"

using namespace std;

//Complex constructors
//default constructor
Complex::Complex()
{
    real = 0;
    imag = 0;
}

Complex::Complex(int Real, int Imag)
{
    real = Real;
    imag = Imag;
}

// Copy constructor
Complex::Complex(Complex& num)
{
    real = num.real;
    imag = num.imag;
}

// Destructor Complex
Complex::~Complex()
{

}

//setter methods
void Complex::setReal(int newReal)
{
    real = newReal;
}

void Complex::setImag(int newImag)
{
    imag = newImag;
}

//getter methods
int Complex::getReal()
{
    return real;
}

int Complex::getImag()
{
    return imag;
}

//operational methods
//memebers are taken using getter method
Complex Complex::add(Complex& num)
{
    Complex val;
    val.setReal(getReal() + num.getReal());
    val.setImag(getImag() + num.getImag());
    return val;
}

Complex Complex::sub(Complex& num)
{
    Complex val;
    val.setReal(getReal() - num.getReal());
    val.setImag(getImag() - num.getImag());
    return val;
}

Complex Complex::mul(Complex& num)
{
    Complex val;

    val.setReal(getReal() * num.getReal() -
                 getImag() * num.getImag());

    val.setImag(getReal() * num.getImag() +
                      getImag() * num.getReal());
    return val;
}

Complex Complex::conjugate()
{
    Complex val;
    val.setReal(getReal());
    //multiply with -1 for conjugate
    val.setImag(-1 * getImag());
    return val;
}

//print method
void Complex::print()
{

    if (getImag() >= 0)
        cout << getReal() << " + " << getImag() << "i" << endl;
    else
        cout << getReal() << " - " << -1 * getImag() << "i" << endl;
}




