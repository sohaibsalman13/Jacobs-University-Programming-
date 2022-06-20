/*
CH-230-A
a11_p5.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/


#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include "Shapes.h"

using namespace std;

Shape::Shape(const string& n) : name(n) {}

Shape::Shape() : name("Default Shape") {}

// Copy Constructor
Shape::Shape(const Shape& obj)
{
    name = obj.name;
}

void Shape::setName(std::string Name)
{
    name = Name;
}


std::string Shape::getName() const
{
    return name;
}

// Method to print the name of shape
void Shape::printName() const
{
    cout << name << endl;
}



CenteredShape::CenteredShape(const string& n, double nx, double ny) : Shape(n)
{
    x = nx;
    y = ny;
}

// Default constructor
CenteredShape::CenteredShape() : Shape("Default Centered Shape")
{
    x = 0;
    y = 0;
}

// Copy constructor
CenteredShape::CenteredShape(const CenteredShape& obj) : Shape(obj.getName())
{
    x = obj.x;
    y = obj.y;
}


void CenteredShape::setX(double X)
{
    x = X;
}

void CenteredShape::setY(double Y)
{
    y = Y;
}


double CenteredShape::getX() const
{
    return x;
}

double CenteredShape::getY() const
{
    return y;
}

// Method to move the shape by changing both data members using setter
void CenteredShape::move(double X, double Y)
{
    setX(X);
    setY(Y);
}

// Parametric constructor with all parameters
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
    CenteredShape(n, nx, ny)
{
    EdgesNumber = nl;
}

RegularPolygon::RegularPolygon()
    : CenteredShape("Default Regular Polygon", 0, 0)
{
    EdgesNumber = 0;
}

// Copy constructor
RegularPolygon::RegularPolygon(const RegularPolygon& obj)
    : CenteredShape(obj.getName(), obj.getX(),
                    obj.getY())
{
    EdgesNumber = obj.EdgesNumber;
}


void RegularPolygon::setEdgesNumber(int newEdgesNumber)
{
    EdgesNumber = newEdgesNumber;
}


int RegularPolygon::getEdgesNumber() const
{
    return EdgesNumber;
}

// Parametric constructor with all parameters
//polygon with 4 sides
Rectangle::Rectangle(const std::string& n, double nx, double ny, double NWidth,
                     double NHeight) : RegularPolygon(n, nx, ny, 4)
{
    nwidth = NWidth;
    nheight = NHeight;
}


Rectangle::Rectangle() : RegularPolygon("Default Rectangle", 0, 0, 4)
{
    nwidth = 0;
    nheight = 0;
}

// Copy constructor
Rectangle::Rectangle(const Rectangle& obj)
    : RegularPolygon(obj.getName(), obj.getX(), obj.getY(),
                     obj.getEdgesNumber())
{
    nwidth = obj.nwidth;
    nheight = obj.nheight;
}


void Rectangle::setNWidth(double NWidth)
{
    nwidth = NWidth;
}


void Rectangle::setNHeight(double NHeight)
{
    nheight = NHeight;
}


double Rectangle::getNWidth() const
{
    return nwidth;
}


double Rectangle::getNHeight() const
{
    return nheight;
}

// Method for perimeter of Rectangle
double Rectangle::perimeter() const
{
    return (2 * (getNWidth() + getNHeight()));
}

// Method for area of Rectangle
double Rectangle::area() const
{
    return (getNWidth() * getNHeight());
}

// Parametric constructor with all parameters
Square::Square(const std::string& n, double nx, double ny, double NSide)
    : Rectangle(n, nx, ny, NSide, NSide)
{
    nside = NSide;
}

// Default constructor
Square::Square() : Rectangle("Default Square", 0, 0, 0, 0)
{
    nside = 0;
}

// Copy constructor
Square::Square(const Square& obj)
    : Rectangle(obj.getName(), obj.getX(), obj.getY(), obj.getNSide(),
                obj.getNSide())
{
    nside = obj.nside;
}

// Setter method for nside data member
void Square::setNSide(double NSide)
{
    nside = NSide;
}

// Getter method for nside data member
double Square::getNSide() const
{
    return nside;
}

// Method to calculate perimeter of Rectangle Square using getters
double Square::perimeter() const
{
    return (getNSide() * 4);
}

// Method to calculate area of Rectangle Square using setters
double Square::area() const
{
    return (pow(getNSide(), 2));
}

// Parametric constructor with all parameters
Circle::Circle(const string& n, double nx, double ny, double r)
    : CenteredShape(n, nx, ny)
{
    Radius = r;
}


Circle::Circle() : CenteredShape("Default Circle", 0, 0)
{
    Radius = 0;
}


void Circle::setRadius(double newRadius)
{
    Radius = newRadius;
}


double Circle::getRadius() const
{
    return Radius;
}

// Method to calculate CenteredShape Circle using getters
double Circle::perimeter() const
{
    return (2 * M_PI * getRadius());
}

// Method to calculate CenteredShape Circle using getters
double Circle::area() const
{
    return (M_PI * pow(getRadius(), 2));
}

