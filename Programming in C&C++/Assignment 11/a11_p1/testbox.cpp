/*
CH-230-A
a11_p1.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

int main(int argc, char **argv)
{
    int n;
    double height, width, depth, volume;

    cin >> n;

    // Dynamically allocating memory
    Box *arrBox = new Box[2*n];

    // taking the box parameters
    for (int i = 0; i < n; i++)
    {
        cout << "Input height of box " << i+1<< " : ";
        cin >> height;
        arrBox[i].setHeight(height);
        cout << "Input width of box " << i+1 << " : ";
        cin >> width;
        arrBox[i].setWidth(width);
        cout << "Input depth of box " << i+1 << " : ";
        cin >> depth;
        arrBox[i].setDepth(depth);
    }

    // using copy constructor
    for (int i = n; i < (2 * n); i++)
    {
        arrBox[i] = arrBox[i-n];
    }

    //Printing volume
    for (int i = 0; i < (2 * n); i++)
    {
        volume = arrBox[i].getHeight() * arrBox[i].getWidth()
        * arrBox[i].getDepth();
        cout << "Volume of box " << i+1 << " is: " << volume << endl;
    }

    delete [] arrBox;

    return 0;
}
