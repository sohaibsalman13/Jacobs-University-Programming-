/*
CH-230-A
a11_p1.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

// Constructor
// default constructor
Box::Box()
{
    height = 0;
    width = 0;
    depth = 0;
}

Box::Box(double Height, double Width, double Depth)
{
    height = Height;
    width = Width;
    depth = Depth;
}


// Copy constructor
Box::Box(Box& box)
{
    // Copy data members
    height = box.height;
    width = box.width;
    depth = box.depth;
}

// Destructor
Box::~Box()
{

}

// Setter methods #
void Box::setHeight(double Height)
{
    height = Height;
}

void Box::setWidth(double Width)
{
    width = Width;
}

void Box::setDepth(double Depth)
{
    depth = Depth;
}

// Getter methods
double Box::getHeight() const
{
    return height;
}

double Box::getWidth() const
{
    return width;
}

double Box::getDepth() const
{
    return depth;
}
