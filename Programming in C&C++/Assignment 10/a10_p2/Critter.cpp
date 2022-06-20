/*
CH-230-A
a10_p2.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname)
{
    name = newname;
}

void Critter::setHunger(int newhunger)
{
    hunger = newhunger;
}


void Critter::setBoredom(int newboredom)
{
    boredom = newboredom;
}

void Critter::setHeight(double newheight)
{
    height = newheight;
}


void Critter::print()
{
    cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
    cout << "My height is " << height << "." << endl;
    cout <<"My boredom level is " << boredom << "." << endl;
}

//new getter methods
int Critter::getHunger()
{
    return hunger;
}

int Critter::getBoredom()
{
    return boredom;
}

double Critter::getHeight()
{
    return height;
}

