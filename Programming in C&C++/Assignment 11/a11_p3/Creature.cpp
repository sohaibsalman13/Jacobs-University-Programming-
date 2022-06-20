/*
CH-230-A
a11_p3.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

Creature::Creature(): distance(10)
{}

Creature::~Creature()
{
    cout<<"Destructor called for Creature"<<endl;
}
//setter method
void Creature::setDist(int Distance)
{
    distance = Distance;
}
//gettermethod
int Creature::getDist()
{
    return distance;
}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

Wizard::Wizard() : distFactor(3)
{}

Wizard::~Wizard()
{
    cout<<"Destructor called for Wizard"<<endl;
}
//setter method
void Wizard::setDistFactor(int DistFactor)
{
    distFactor = DistFactor;
}
//getter method
int Wizard::getDistFactor()
{
    return distFactor;
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Batman::Batman() : secondsran(200)
{
    cout<<"Batman constructed from creature"<<endl;
}

Batman::~Batman()
{
    cout<<"Destructor called for Batman"<<endl;
}
//setter method
void Batman::setSecondsran(int secran)
{
    secondsran = secran;
}
//getter method
int Batman::getSecondsran()
{
    return secondsran;
}

void Batman::speed() const
{
    cout << "Speed: " << secondsran*distance << "km/s"<< endl;
}

Alien::Alien(): alienfromearth(37564)
{
    cout << "Alien constructed from creature" << endl;
}

Alien::~Alien()
{
    cout<<"Destructor called for Alien"<<endl;
}
//setter method
void Alien::setaliendist(int aliendist)
{
    alienfromearth = aliendist;
}
//getter method
int Alien::getaliendist()
{
    return alienfromearth;
}

void Alien::alienfromsun() const
{
    cout<<"Alien's distance: "<< alienfromearth + EarthfromSun <<endl;
    cout<<endl;
}

