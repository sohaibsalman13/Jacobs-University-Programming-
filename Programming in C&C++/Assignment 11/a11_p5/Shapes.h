/*
CH-230-A
a11_p5.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

using namespace std;

class Shape  			// base class
{
private:   				// private access modifier: could also be protected
    std::string name;   // every shape will have a name
public:
    Shape(const std::string&);  // builds a shape with a name
    Shape();					// empty shape
    Shape(const Shape& obj);		// copy constructor
    void printName() const ; // prints the name

    void setName(string Name);

    string getName() const;
};

class CenteredShape : public Shape    // inherits from Shape
{
private:
    double x,y;  // the center of the shape
public:
    CenteredShape(const std::string&, double, double);  // usual three constructors
    CenteredShape();
    CenteredShape(const CenteredShape& obj);
    void move(double, double);	// moves the shape, i.e. it modifies it center

    void setX(double X);
    void setY(double Y);

    double getX() const;
    double getY() const;
};

class RegularPolygon : public CenteredShape   // a regular polygon is a centered_shape with a number of edges
{
private:
    int EdgesNumber;
public:
    RegularPolygon(const string&, double, double, int);
    RegularPolygon();
    RegularPolygon(const RegularPolygon& obj);

    void setEdgesNumber(int newEdgesNumber);

    int getEdgesNumber() const;
};

class Rectangle : public RegularPolygon
{
private:
    double nwidth;
    double nheight;
public:
    // Parametric constructor with all parameters
    Rectangle(const string& n, double nx, double ny, double NWidth,
              double NHeight);
    Rectangle(); // Default constructor
    Rectangle(const Rectangle& obj); // Copy constructor

    void setNWidth(double NWidth); // Setter method for nwidth
    void setNHeight(double NHeight); // Setter method for nheight

    double getNWidth() const; // Getter method for nwidth
    double getNHeight() const; // Getter method for nheight

    double perimeter() const; // Calculate perimeter
    double area() const; // Calculate area
};

class Square : public Rectangle
{
private:
    double nside;
public:
    // Parametric constructor with all parameters
    Square(const string& n, double nx, double ny, double NSide);
    Square(); // Default constructor
    Square(const Square& obj); // Copy constructor

    void setNSide(double NSide); // Setter method for nside

    double getNSide() const; // Getter method for nside

    double perimeter() const; // Calculate perimeter
    double area() const; // Calculate area
};



class Circle : public CenteredShape    // a Circle is a shape with a center and a radius
{
private:
    double Radius;
public:
    Circle(const string&, double, double, double);
    Circle();
    Circle(const Circle&);

    void setRadius(double newRadius);

    double getRadius() const;

    double perimeter() const;
    double area() const;
};

#endif
