/*
CH-230-A
a13_p2.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include "Complex.h"


int main(int argc, char **argv)
{
    Complex num1, num2, result;

    // Opening files
    std::ifstream in1("in1.txt");
    std::ifstream in2("in2.txt");

    if (!in1.good())
    {
        std::cerr << "Error opening file 1!" << std::endl;
        exit(1);
    }

    if (!in2.good())
    {
        std::cerr << "Error opening file 2!" << std::endl;
        exit(1);
    }

    // Open the out file with truncate flag
    std::ofstream out("output.txt", std::ios::trunc);
    if (!out.good())
    {
        std::cerr << "Error opening output file!" << std::endl;
        exit(2);
    }

    // Check if files are open
    if (in1.is_open() && in2.is_open() && out.is_open())
    {
        in1 >> num1;
        in2 >> num2;
        result = num1 + num2;
        std::cout << "Sum of complex numbers: " << result << std::endl;
        out << "Sum of complex numbers: " << result << std::endl;
        result = num1 - num2;
        std::cout << "Difference of complex numbers: " << result << std::endl;
        out << "Difference of complex numbers: " << result << std::endl;
        result = num1 * num2;
        std::cout << "Product of complex numbers: " << result << std::endl;
        out << "Product of complex numbers: " << result;
    }
    else std::cout << "Error opening a file";

    // Close files
    in1.close();
    in2.close();
    out.close();

    return 0;

}
