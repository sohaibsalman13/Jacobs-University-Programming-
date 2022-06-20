/*
CH-230-A
a10_p4.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

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

Critter::Critter(string newname, int newhunger,
                 int newboredom, double newheight)
{
    cout<<"Constructor with all parameters called"<<endl;
    name = newname;
    hunger = newhunger;
    boredom = newboredom;
    height = newheight;
}



//setter methods
void Critter::setName(std::string& newname)
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

void Critter::print()
{
    cout<<"Name is "<< name <<endl;
    cout<<"Hunger is "<< hunger <<endl;
    cout<<"Boredom is "<< boredom <<endl;
    cout<<"Height is "<< height <<endl;
    cout<<endl;

}



