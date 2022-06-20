/*
CH-230-A
a12_p2.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/



#include <iostream>
#include "TournamentMember.h"

std::string TournamentMember::location = "Default Location";

//parametirc constructor
TournamentMember::TournamentMember(char const *fname, char const *lname,
                                   char const *DOB, std::string &location,
                                   std::string role, bool pres)

{
    std::cout<<"Parametric Constructor"<<std::endl;
    (*this).firstname = fname;
    (*this).lastname = lname;
    (*this).DateofBirth = DOB;
    (*this).setLocation(location);
    (*this).role = role;
    (*this).present = present;
}

//default constructor
TournamentMember::TournamentMember()
{
    std::cout << "Default Constructor"<<std::endl;
    (*this).firstname = "Default";
    (*this).lastname = "Default";
    (*this).DateofBirth = "0000-00-00";
    (*this).role = "Participant";
    (*this).present = true;
}

// Copy constructor
TournamentMember::TournamentMember(const TournamentMember& mem)
{
    std::cout << "Copy Constructor"<<std::endl;
    (*this).firstname = mem.firstname;
    (*this).lastname = mem.lastname;
    (*this).DateofBirth = mem.DateofBirth;
    (*this).setLocation(mem.location);
    (*this).role = mem.role;
    (*this).present = mem.present;
}

// Destructor
TournamentMember::~TournamentMember()
{
    std::cout << "Destructor"<<std::endl;
}

//setter methods
inline void TournamentMember::setFirstName(char const *FirstName)
{
    firstname = FirstName;
}

inline void TournamentMember::setLastName(char const *LastName)
{
    lastname = LastName;
}

inline void TournamentMember::setDateOfBirth(char const *DateOfBirth)
{
    DateofBirth = DateOfBirth;
}

inline void TournamentMember::setLocation(std::string &Location)
{
    location = Location;
}

inline void TournamentMember::setRole(std::string Role)
{
    role = Role;
}

inline void TournamentMember::setPresent(bool Present)
{
    present = Present;
}

//getter methods
inline char const* TournamentMember::getFirstName() const
{
    return firstname;
}

inline char const* TournamentMember::getLastName() const
{
    return lastname;
}

inline char const* TournamentMember::getDateOfBirth() const
{
    return DateofBirth;
}

inline std::string TournamentMember::getLocation() const
{
    return location;
}

inline std::string TournamentMember::getRole() const
{
    return role;
}

inline bool TournamentMember::getPresent() const
{
    return present;
}

//print method
void TournamentMember::printInfo()
{
    std::cout << "First Name: "
              << getFirstName()
              << "\nLast Name: "
              << getLastName()
              << "\nDate of Birth: "
              << getDateOfBirth()
              << "\nLocation: "
              << getLocation()
              << "\nRole: "
              << getRole()
              << "\nActive: "
              << getPresent()
              << std::endl;
}

//changing location method
void TournamentMember::changeLocation(const std::string changedLocation)
{
    std::cout << "Location changing to "
              << changedLocation
              << std::endl;
    location = changedLocation;
}
