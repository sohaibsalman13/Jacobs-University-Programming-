/*
CH-230-A
a10_p6.[c++]
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
    thirst = 0.0;
}

Critter::Critter(string newname)
{
    cout<<"Constructor with name parameters called"<<endl;
    name = newname;
    hunger = 0;
    boredom = 0;
    height = 5;
    thirst = 0.0;
}

Critter::Critter(string Name, int Hunger,
                 int Boredom, double Height)
{
    cout<<"Constructor with 4 parameters called"<<endl;
    name = Name;
    hunger = converttwo(Hunger);
    boredom = Boredom;
    height = Height;
    thirst = converttwo(Hunger);
}

Critter::Critter (std::string Name, int Hunger, int Boredom,
                  double Height, double Thirst)
{
    cout<<"Constructor with all parameters called"<<endl;
    name = Name;
    hunger = converttwo(Hunger);
    boredom = Boredom;
    height = Height;
    thirst = Thirst;
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

void Critter::setThirst(double newthirst)
{
    thirst = newthirst;
}

//getter methods
string Critter::getName()
{
    return name;
}

int Critter::getHunger()
{
    return convertone();
}

int Critter::getBoredom()
{
    return boredom;
}

double Critter::getHeight()
{
    return height;
}

double Critter::getThirst()
{
    return thirst;
}

//conversion methods
int Critter::convertone()
{
    return ((int)(hunger * 10));
}

double Critter::converttwo(int Hunger)
{
    return (((double)Hunger)/10);
}

void Critter::print()
{
    cout<<"Name is "<< name <<endl;
    cout<<"Hunger is "<< hunger <<endl;
    cout<<"Boredom is "<< boredom <<endl;
    cout<<"Height is "<< height <<endl;
    cout<<"Thirst is "<<thirst<<endl;
    cout<<endl;

}
