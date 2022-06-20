/*
CH-230-A
a12_p1.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/


#include <iostream>
#include "Shapes.h"

using namespace std;

Shape::Shape(const string& n) : name(n)
{
}

void Shape::printName() const
{
    cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n)
{
    x = nx;
    y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
    CenteredShape(n,nx,ny)
{
    EdgesNumber = nl;
}
//printing hexagon with side
Hexagon::Hexagon(const string& name, double posX, double posY,
                 int edgesNum, int Side, const std::string& Color)
    : RegularPolygon(name, posX, posY, edgesNum)
{
    side = Side;
    color = Color;
    cout << color
         << " Hexagon with side length "
         << side
         << endl;
}
//defualt constructor
Hexagon::Hexagon() : RegularPolygon("Default Hexagon", 0.0, 0.0, 6)
{
    side = 0;
    color = "Blue";
    cout << "Default Constructed: White Hexagon with side length 0"
         << endl;
}

Hexagon::Hexagon(const Hexagon& obj) : RegularPolygon(obj.name, obj.x, obj.y,
            obj.EdgesNumber)
{
    side = obj.side;
    color = obj.color;
    cout << color
         << " Hexagon with side length "
         << side
         << endl;
}
//destructor
Hexagon::~Hexagon()
{
    cout << "Destructor called!\n";
}
//setter methods
void Hexagon::setSide(int Side)
{
    side = Side;
}

void Hexagon::setColor(string Color)
{
    color = Color;
}
//getter methods
int Hexagon::getSide() const
{
    return side;
}

string Hexagon::getColor() const
{
    return color;
}

int Hexagon::perimeter() const
{
    return (getSide() * 6);
}
//calculating area
double Hexagon::area() const
{
    return (1.5 * sqrt(3) * pow(getSide(), 2));
}

Circle::Circle(const string& n, double nx, double ny, double r) :
    CenteredShape(n,nx,ny)
{
    Radius = r;
}
