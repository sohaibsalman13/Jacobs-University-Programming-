/*
CH-230-A
a11_p6.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

Vector::Vector(double *Ptr, int Size)
{
    ptr = Ptr;
    size = Size;
}
//default constructor
Vector::Vector()
{
    ptr = NULL;
    size = 0;
}

Vector::Vector(const Vector& vec)
{
    ptr = new double[vec.size];
    size = vec.size;
    for (int i = 0; i < vec.size; i++)
    {
        ptr[i] = vec.ptr[i];
    }
}
//destructor
Vector::~Vector()
{
    delete [] ptr;
}
//setter methods called
void Vector::setPtr(double *Ptr)
{
    ptr = Ptr;
}

void Vector::setSize(int Size)
{
    size = Size;
}
//getter methods
double* Vector::getPtr() const
{
    return ptr;
}

int Vector::getSize() const
{
    return size;
}
//printing vector method
void Vector::printComp() const
{
    std::cout << "[ ";
    for (int i = 0; i < getSize(); i++)
    {
        if (i != (getSize() - 1))
        {
            std::cout << getPtr()[i]
                      << " , ";
        }
        else std::cout << getPtr()[i];
    }
    std::cout << " ]" << endl;
}

double Vector::norm() const
{
    double sum = 0;
    for (int i = 0; i < getSize(); i++)
    {
        sum += pow(getPtr()[i], 2);
    }
    return sqrt(sum);
}

//addition methods
Vector Vector::add(const Vector& secAddend) const
{
    double *vecResult = new double[getSize()];
    Vector additionVec(vecResult, getSize());
    for (int i = 0; i < getSize(); i++)
        //calculating sum
        vecResult[i] = getPtr()[i] + secAddend.getPtr()[i];

    return additionVec;
}
//subtraction methods
Vector Vector::subtract(const Vector& subtrahend) const
{
    double *vecResult = new double[getSize()];
    Vector subtractionVec(vecResult, getSize());
    for (int i = 0; i < getSize(); i++)
        //calculating difference
        vecResult[i] = getPtr()[i] - subtrahend.getPtr()[i];

    return subtractionVec;
}

double Vector::scalarProduct(const Vector& second) const
{
    double scalProd = 0;
    for (int i = 0; i < getSize(); i++)
        //calculating product
        scalProd += (getPtr()[i] * second.getPtr()[i]);

    return scalProd;
}
