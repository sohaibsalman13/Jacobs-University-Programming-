/*
CH-230-A
a13_p6.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec(20);

    // Assign value 8 to all 20 elements
    for (int i = 0; i < 20; i++)
    {
        vec[i] = 8;
    }

    try
    {
        vec.at(20); // Access 21st element,
    }
    // Catch out_of_range error
    catch (std::out_of_range &error)
    {
        std::cerr << error.what() << std::endl;
    }

    return 0;
}
