/*
CH-230-A
a12_p3.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/


#include <iostream>
#include "TournamentMember.h"

int main(int argc, char** argv)
{


    // Player instance created using default constructor
    Player firstInst;
    firstInst.printInfo();
    firstInst.printPlayerInfo(); // Show default data members

    std::cout<<"---------------"<<std::endl;

    // Set some data members to the firstInstance using setter functions
    firstInst.setFoot("Right");
    firstInst.setNumber(1);
    firstInst.setPosition("Goal Keeper");

    firstInst.printInfo();
    firstInst.printPlayerInfo(); // Show changed data members

     std::cout<<"---------------"<<std::endl;

    // c_str() used to return a constant char pointer of each string
    std::string firstname = "David";
    const char *firstName = firstname.c_str();
    std::string lastname = "De Gea";
    const char *lastName = lastname.c_str();
    std::string dateofbirth = "1990-11-07";
    const char *dateOfBirth = dateofbirth.c_str();
    bool present = true;

    std::string location = "Man UTD";
    std::string role = "Player";
    std::string position = "Goalkeeper";
    std::string foot = "Right";

    // Player instance created using parametric constructor
    Player secondInst(firstName, lastName, dateOfBirth, location,
                      role, present, 23, position, 20, foot);

    secondInst.printInfo();
    secondInst.printPlayerInfo();

     std::cout<<"---------------"<<std::endl;

    // Player instance created using copy constructor
    Player thirdInst(secondInst);

    thirdInst.printInfo();
    thirdInst.printPlayerInfo();

    std::cout<<"---------------"<<std::endl;

    TournamentMember::changeLocation("Hamburg");



    // Output all the instances to see the changed location
    firstInst.printInfo();
    firstInst.printPlayerInfo();

     std::cout<<"---------------"<<std::endl;


    secondInst.printInfo();
    secondInst.printPlayerInfo();

     std::cout<<"---------------"<<std::endl;

    // Call the incrementGoalsScored method
    thirdInst.addGoalsScored();

    // Show the changed goalsScored data member
    thirdInst.printInfo();
    thirdInst.printPlayerInfo();


    return 0;
}
