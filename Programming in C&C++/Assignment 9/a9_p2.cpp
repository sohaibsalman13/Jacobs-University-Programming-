/*
CH-230-A
a9_p2.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //declaring values
    int n;
    double x;
    string s;

    //taking input
    cin >> n >> x;
    getchar();
    getline(cin, s);

    //loop for printing
    for (int i=0; i<n; i++)
    {
        cout << s << ":";
        cout << x << endl;

    }
    return 0;
}


