/*
CH-230-A
a11_p4.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

using namespace std;

//main class
class Creature
{

protected:
    int distance;
public:
    Creature();
    ~Creature();
    void run() const;

    //setter method
    void setDist(int Distance);

    //getter method
    int getDist();


};

class Wizard : public Creature
{

private:
    int distFactor;
public:
    Wizard();
    ~Wizard();
    void hover() const;

    //setter method
    void setDistFactor(int DistFactor);

    //getter method
    int getDistFactor();


};

class Batman : public Creature
{

private:
    int secondsran;
public:
    Batman();
    ~Batman();//destructor
    void speed() const;

    //setter method
    void setSecondsran(int secondsran);

    //getter method
    int getSecondsran();


};

class Alien : public Creature
{
private:
    int alienfromearth;
    int EarthfromSun = 17493638;

public:
    Alien();
    ~Alien();//destructor
    void alienfromsun() const;

    //setter method
    void setaliendist(int alienfromearth);

    //getter method
    int getaliendist();


};
