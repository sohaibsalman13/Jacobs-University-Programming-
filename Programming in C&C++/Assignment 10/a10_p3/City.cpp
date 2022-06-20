/*
CH-230-A
a10_p3.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

//setter methods

void City::setName(string cityname)
{
    name = cityname;
}

void City::setMayor(string mayorname)
{
    mayor = mayorname;
}

void City::setInhabitants(int num)
{
    inhabitants = num;
}

void City::setArea(double cityarea)
{
    area = cityarea;
}

void City::print()
{
    cout<<"The city is "<<name<<"."<<endl;
    cout<<"The mayor is "<<mayor<<"."<<endl;
    cout<<"The number of inhabitants is "<<inhabitants<<"."<<endl;
    cout<<"The area is "<<area<<" km^2."<<endl;
    cout<<endl;

}

//getter methods
string City::getName()
{
    return name;
}
string City::getMayor()
{
    return mayor;
}

int City::getInhabitants()
{
    return inhabitants;
}

double City::getArea()
{
    return area;
}

