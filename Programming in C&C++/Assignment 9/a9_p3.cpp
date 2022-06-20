/*
CH-230-A
a9_p3.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
using namespace std;

//function for absolute value
float value(float num)
{
    if (num < 0)
        return -num;
    else
        return num;
}

int main()
{
    float n;
    cin >> n;
    //calling function in output
    cout << value(n) << endl;
    return 0;
}
