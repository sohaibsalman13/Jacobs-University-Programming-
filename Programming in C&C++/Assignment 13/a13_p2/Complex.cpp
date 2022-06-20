/*
CH-230-A
a13_p2.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include <sstream>
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
std::ostream& operator<<(std::ostream &out, const Complex &c)
{
    if (c.imag >= 0)
        out << c.real << "+" << c.imag << "i";
    else out << c.real << c.imag << "i";
    return out;
}

std::istream& operator>>(std::istream& in, Complex &c)
{
    string delimiter = "+-";
    std::string number;
    std::getline(in, number);
    // Find position of period in input
    std::size_t found = number.find_last_of(delimiter);

    // Divide the input into filename and extension using the position of period
    std::string Real = number.substr(0, found);
    std::string Imaginary = number.substr(found, number.length() - 1);

    stringstream stringToIntRe(Real);
    stringToIntRe >> c.real;

    stringstream stringToIntIm(Imaginary);
    stringToIntIm >> c.imag;

    return in;
}

Complex Complex::operator+(const Complex& secondComplex)
{
    Complex result((*this).real + secondComplex.real,
                   (*this).imag + secondComplex.imag);
    return result;
}

Complex Complex::operator-(const Complex& secondComplex)
{
    Complex result((*this).real - secondComplex.real,
                   (*this).imag - secondComplex.imag);
    return result;
}

Complex Complex::operator*(const Complex& secondComplex)
{
    Complex result((*this).real * secondComplex.real -
                   (*this).imag * secondComplex.imag,
                   (*this).real * secondComplex.imag +
                   secondComplex.real * (*this).imag);
    return result;
}

Complex& Complex::operator=(const Complex& obj)
{
    real = obj.real;
    imag = obj.imag;
    return *this;
}


