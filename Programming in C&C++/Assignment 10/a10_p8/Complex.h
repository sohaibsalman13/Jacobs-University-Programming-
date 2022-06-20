/*
CH-230-A
a10_p8.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <string>

class Complex
{
private:
    int real;
    int imag;

public:
    // Constructors
    Complex(int real, int complex);
    Complex();

    Complex(Complex& num);
    ~Complex();

    // setter methods
    void setReal(int newReal);
    void setImag(int newImag);

    // getter methods
    int getReal();
    int getImag();

    // service method
    Complex add(Complex& num);
    Complex sub(Complex& num);
    Complex mul(Complex& num);
    Complex conjugate();

    //print method
    void print();
};
