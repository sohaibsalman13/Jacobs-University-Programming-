/*
CH-230-A
a13_p7.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>

class OwnException : public std::exception
{
private:
    std::string Exception;
public:
    // Parametric constructor
    OwnException(std::string except)
    {
        (*this).Exception = except;
    }
    // Overiding what() method
    virtual const char* what() const noexcept
    {
        return "OwnException\n";
    }
};

void exceptionThrower(int input)
{

    switch(input)
    {
    case 1:
        throw 'a';
        break;
    case 2:
        throw 12;
        break;
    case 3:
        throw true;
        break;
    default:
        throw OwnException("Default case exception");
        break;
    }
}

int main()
{
    // Loop to go through all switch cases
    for (int i = 1; i < 5; i++)
    {
        try
        {
            exceptionThrower(i);
        }
        catch (char error)
        {
            std::cerr << "Caught in main: " << error << std::endl;
        }
        catch (int error)
        {
            std::cerr << "Caught in main: " << error << std::endl;
        }
        catch (bool error)
        {
            std::cerr << "Caught in main: " << error << std::endl;
        }
        catch (OwnException& error)
        {
            std::cerr << "Caught in main: " << error.what() << std::endl;
        }
    }
    return 0;
}
