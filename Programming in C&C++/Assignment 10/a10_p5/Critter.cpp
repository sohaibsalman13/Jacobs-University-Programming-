/*
CH-230-A
a10_p5.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include "Crittter.h"


using namespace std;


//Constructors
Critter::Critter()
{
    cout<<"Constructor with no parameters called"<<endl;
    name = "default_critter";
    hunger = 0;
    boredom = 0;
    height = 5;
}

Critter::Critter(string newname)
{
    cout<<"Constructor with name parameters called"<<endl;
    name = newname;
    hunger = 0;
    boredom = 0;
    height = 5;
}

Critter::Critter(string Name, int Hunger,
                 int Boredom, double Height)
{
    cout<<"Constructor with all parameters called"<<endl;
    name = Name;
    hunger = converttwo(Hunger);
    boredom = Boredom;
    height = Height;
}



//setter methods
void Critter::setName(std::string& newname)
{
    name = newname;
}

void Critter::setHunger(int newhunger)
{
    hunger = converttwo(newhunger);
}

void Critter::setBoredom(int newboredom)
{
    boredom = newboredom;
}

void Critter::setHeight(double newheight)
{
    height = newheight;
}

//getter methods
string Critter::getName()
{
    return name;
}

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

//conversion methods
int Critter::convertone()
{
    return (hunger * 10);
}

double Critter::converttwo(int Hunger)
{
    return (double)Hunger / 10.0;
}

void Critter::print()
{
    cout<<"Name is "<< getName() <<endl;
    cout<<"Hunger is "<< getHunger() <<endl;
    cout<<"Boredom is "<< getBoredom() <<endl;
    cout<<"Height is "<< getHeight() <<endl;
    cout<<endl;

}


