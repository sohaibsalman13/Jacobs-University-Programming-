/*
CH-230-A
a13_p3.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include <fstream>

int main()
{
    int n;

    std::cout << "Enter the number of files: ";
    std::cin >> n;
    std::string fname;

    // Open the output file in binary and truncate
    std::ofstream out("concatn.txt", std::ios::binary | std::ios::trunc);
    if (!out.good())
    {
        std::cerr << "Error opening output file!" << std::endl;
        exit(2);
    }

    // Loop to go through each file
    for (int i = 0; i < n; i++)
    {
        std::cin >> fname;
        std::ifstream in(fname, std::ios::binary);
        if (!in.good())
        {
            std::cerr << "Error opening input file "
                      << fname
                      << "!"
                      << std::endl;
            exit(2);
        }

        if (in.is_open() && out.is_open())
        {
            in.seekg(0, std::ios::end);
            int fileLength = in.tellg(); // Store file length
            in.seekg(0, std::ios::beg);

            // Dynamically allocated char array
            char *buf = new char[fileLength];

            in.read(buf, fileLength); // Read whole file from in into buf
            out.write(buf, fileLength); // Write whole file from buf into out


            out << std::endl;

            delete [] buf;
        }
        in.close();
    }
    out.close();
    return 0;
}
