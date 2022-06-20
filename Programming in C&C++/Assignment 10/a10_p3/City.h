/*
CH-230-A
a10_p3.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <string>

class City
{
private:
    std::string name;
    std::string mayor;
    int inhabitants;
    double area;

public:
    void setName(std::string name);
    void setInhabitants(int inhabitants);
    void setMayor(std::string mayor);
    void setArea(double area);

    std::string getName();
    std::string getMayor();
    int getInhabitants();
    double getArea();

    void print();
};

