/*
CH-230-A
a11_p1.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/
#include <iostream>

class Box
{
private:
    double height;
    double width;
    double depth;

public:
    // Constructors
    Box();
    Box(double Height, double Width, double Depth);


    Box(Box& box);
    ~Box();

    // setter methods
    void setHeight(double Height);
    void setWidth(double Width);
    void setDepth(double Depth);

    // getter methods
    double getHeight() const;
    double getWidth() const;
    double getDepth() const;
};
