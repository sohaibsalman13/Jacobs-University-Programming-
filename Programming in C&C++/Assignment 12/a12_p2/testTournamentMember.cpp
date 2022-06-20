/*
CH-230-A
a12_p2.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/



#include <iostream>
#include "TournamentMember.h"

int main(int argc, char** argv)
{
    const char firstname[36] = "Sohaib";
    char lastname[37] = "Salman";
    char dob[11] = "2002-02-13";
    std::string location = "Lahore";
    std::string changedLocation = "Bremen";
    std::string role = "Player";
    bool present = true;



    // Default constructed instance
    TournamentMember firstInst;
    firstInst.printInfo();



    // Parametric constructor
    TournamentMember secondInst(firstname, lastname, dob, location, role,
                                    present);
    secondInst.printInfo();



    // Change static location
    secondInst.changeLocation(changedLocation);




    secondInst.printInfo();



    // Copy constructor
    TournamentMember thirdInst(secondInst);
    thirdInst.printInfo();


    return 0;
}
