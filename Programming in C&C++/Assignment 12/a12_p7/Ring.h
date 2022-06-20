/*
CH-230-A
a12_p6.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/
#ifndef _RING_H
#define _RING_H
#include "Circle.h"

class Ring : public Circle
{
public:
    Ring(const char *n, double outer, double inner);
    ~Ring();
    double calcArea() const;
    double calcPerimeter() const;
private:
    double innerradius;
};

#endif
