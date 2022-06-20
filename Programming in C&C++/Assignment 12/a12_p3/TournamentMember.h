/*
CH-230-A
a12_p3.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/


#include <string>

class TournamentMember
{
protected:
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
//player class
class Player: public TournamentMember
{
private:
    int number;
    std::string position;
    int NumOfGoals;
    std:: string foot;

public:
    Player();
    Player(char const *fname, char const *lname,
           char const *DOB, std::string &location,
           std::string role, bool pres, int Num,
           std::string Position, int Goals,
           std::string Foot);
    Player (const Player& obj);
    ~Player();

    // Setter methods
    void setNumber(int Number)
    {
        number = Number;
    }
    void setPosition(std::string Position)
    {
        position = Position;
    }
    void setFoot(std::string Foot)
    {
        foot = Foot;
    }

    // Getter methods
    inline int getNumber() const
    {
        return number;
    }
    inline std::string getPosition() const
    {
        return position;
    }
    inline int getGoalsScored() const
    {
        return NumOfGoals;
    }
    inline std::string getDominantFoot() const
    {
        return foot;
    }

    // Methods
    void printPlayerInfo() const;
    void addGoalsScored();

};
