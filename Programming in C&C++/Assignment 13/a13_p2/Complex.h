/*
CH-230-A
a13_p2.[c++]
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

    // Overloaded friend functions
    friend std::ostream& operator<<(std::ostream &out, const Complex &c);
    friend std::istream& operator>>(std::istream &in, Complex &c);

    // Overloaded addition, subtraction and multiplication operators
    Complex operator+(const Complex& secondComplex);
    Complex operator-(const Complex& secondComplex);
    Complex operator*(const Complex& secondComplex);

    // Overloaded assignment operator for Complex instances
    Complex& operator=(const Complex& obj);

    //print method
    void print();
};
