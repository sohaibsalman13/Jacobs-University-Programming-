/*
CH-230-A
a12_p2.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/



#include <string>

class TournamentMember
{
private:
    const char *firstname;
    const char *lastname;
    const char *DateofBirth;
    static std::string location;
    std::string role;
    bool present;

public:
    TournamentMember();
    TournamentMember(char const *fname, char const *lname,
                     char const *DOB, std::string &location,
                     std::string role, bool pres);
    TournamentMember(const TournamentMember& mem);
    ~TournamentMember();

    //setter methods
    inline void setFirstName(const char *FirstName);
    inline void setLastName(const char *LastName);
    inline void setDateOfBirth(const char *DateOfBirth);
    inline void setLocation (std::string &Location);
    inline void setRole (std::string Role);
    inline void setPresent (bool Present);

    //getter methods
    inline const char *getFirstName() const;
    inline const char* getLastName() const;
    inline const char* getDateOfBirth() const;
    inline std::string getLocation() const;
    inline std::string getRole() const;
    inline bool getPresent() const;

    //methods
    void printInfo();
    static void changeLocation(const std::string changedLocation);
};
