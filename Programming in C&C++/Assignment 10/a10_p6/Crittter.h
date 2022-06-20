/*
CH-230-A
a10_p6.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <string>


class Critter
{
private:
    std::string name;
    int hunger;
    int boredom;
    double height;
    double thirst;

    //conversion methods
    int convertone();
    double converttwo(int Hunger);


public:
    //constructors
    Critter();
    Critter(std::string newName);
    Critter(std::string Name, int Hunger, int Bored, double Height = 10.0);
    Critter(std::string Name, int Hunger, int Bored, double Height,
            double Thirst);



    //setter methods
    void setName(std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHeight(double newheight);
    void setThirst(double newthirst);


    // getter method
    std::string getName();
    int getHunger();
    int getBoredom();
    double getHeight();
    double getThirst();



    // service method
    void print();
};
