/*
CH-230-A
a9_p5.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main ()
{
    string s;
    int n, num, value, count = 1;

    //taking name input
    cout << "Enter your name:" << endl;
    getline(cin, s);

    //first number input
    cout << "Pick a number between 1 and 100:" << endl;
    cin >> n;

    //generating random number
    srand (static_cast < unsigned int > (time (0)));
    value = rand ();
    num = (value % 100) + 1;

    //loop for checking if num is high or low
    while (n != num)
    {
        if (n<num)
        {
            cout << "Too low; pick again" << endl;
            cin >> n;
            count = count +1;
        }
        if (n>num)
        {
            cout << "Too high; pick again" << endl;
            cin >> n;
            count = count +1;
        }

    }
    //output with no of tries
     cout << "Congratulation" << endl;
     cout << "no. of tries: " << count <<endl;




}
