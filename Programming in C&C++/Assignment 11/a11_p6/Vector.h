/*
CH-230-A
a11_p6.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#ifndef __VECTOR_H
#define __VECTOR_H
class Vector
{
private:
    double *ptr;
    int size;
public:
    Vector(double *Ptr, int Size);
    Vector();
    Vector(const Vector&); //copy constructor
    ~Vector();//destructor

    //setter method
    void setPtr(double *Ptr);
    void setSize(int Size);

    //getter method
    double* getPtr() const;
    int getSize() const;

    //operation methods
    void printComp() const;
    double norm() const;
    Vector add(const Vector& secAddend) const;
    Vector subtract(const Vector& subtrahend) const;
    double scalarProduct(const Vector& second) const;
};
#endif
