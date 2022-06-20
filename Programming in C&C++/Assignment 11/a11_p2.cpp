/*
CH-230-A
a11_p2.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>

using namespace std;

//main class
class Creature
{
public:
    Creature();
    ~Creature();
    void run() const;

protected:
    int distance;
};

Creature::Creature(): distance(10)
{}

Creature::~Creature()
{
    cout<<"Destructor called for Creature"<<endl;
}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}
//derived class
class Wizard : public Creature
{
public:
    Wizard();
    ~Wizard();
    void hover() const;

private:
    int distFactor;
};

Wizard::Wizard() : distFactor(3)
{}

Wizard::~Wizard()
{
    cout<<"Destructor called for Wizard"<<endl;
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
//derived class
class Batman : public Creature
{
public:
    Batman();
    ~Batman();//destructor
    void speed() const;
private:
    int secondsran;

};

Batman::Batman() : secondsran(200)
{
    cout<<"Batman constructed from creature"<<endl;
}

Batman::~Batman()
{
    cout<<"Destructor called for Batman"<<endl;
}

void Batman::speed() const
{
    cout << "Speed: " << secondsran*distance << "km/s"<< endl;
}
//derived class
class Alien : public Creature
{
public:
    Alien();
    ~Alien();//destructor
    void alienfromsun() const;
private:
    int alienfromearth;
    int EarthfromSun = 17493638;

};

Alien::Alien(): alienfromearth(37564)
{
    cout << "Alien constructed from creature" << endl;
}

Alien::~Alien()
{
    cout<<"Destructor called for Alien"<<endl;
}

void Alien::alienfromsun() const
{
    cout<<"Alien's distance: "<< alienfromearth + EarthfromSun <<endl;
    cout<<endl;
}


int main()
{
    //creating objects of class and applying methods
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating the Batman.\n";
    Batman b;
    b.run();
    b.speed();

    cout << "\nCreating an Alien.\n";
    Alien a;
    a.run();
    a.alienfromsun();

    return 0;
}

