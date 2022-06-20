/*
CH-230-A
a9_p4.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include <string>
using namespace std;/*
CH-230-A
a9_p4.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include <string>
using namespace std;

//function for integer difference
int mycount(int num1, int num2)
{
    return num1 - num2;
}

//function for character repitition
int mycount(char ch, string line)
{
    int count = 0;
    for (int i=0; i<sizeof(line); i++)
    {
        if (line[i] == ch)
            count = count + 1;
    }
    return count;
}

int main()
{
    int x, y;
    char c;
    string s;

    cin >> x;
    cin >> y;
    cin >> c;
    //taking string input with white space
    getline(cin>>ws,s);

    //calling functions
    cout<< mycount (x, y) << endl;
    cout<< mycount (c, s) << endl;


    return 0;
}
