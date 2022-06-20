/*
CH-230-A
a9_p9.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


//array of strings
string s[17] = {"computer", "television", "keyboard", "laptop",
                "mouse", "screen", "cable", "football", "sisyphus",
                "pandora", "achilles", "hades", "beethoven",
                "nietzsche", "camus", "hermes", "iris"
               };

//function for generating random word from array
void random(string &str1)
{
    int val, num;
    srand (static_cast < unsigned int > (time (0)));
    val = rand();
    num = (val % 17);
    //calling string from the random number
    str1 = s[num];
}
//function for replacing vowels
void repvow(string &str1)
{
    int len = str1.length();
    for (int i=0; i<len; i++)
    {
        if (str1[i]=='a' || str1[i]=='e'
                || str1[i]=='i' || str1[i]=='o'
                || str1[i]=='u')
        {
            str1[i] = '_';
        }
    }

}

int main()
{
    string str1, str2;
    string ans;
    int count = 0;
    random(str1);
    random(str2);
    repvow(str2);
    cout << str2 <<endl;

    while(1)
    {
        count++;
        cin >> ans;
        if(ans == "quit")
            exit(1);//if player does not want to play
        else if(ans==str1)
        {
            cout<<"Congrats"<<endl;
            cout<<"You did it in "<<count <<" tries"<<endl;
            cout<< "Do you want to continue?"<< endl;
            string x;
            cin>>x;//taking response
            if(x=="quit")
                exit(1);
            else
            {
                random(str1);
                random(str2);
                repvow(str2);
                count = 0;
                cout << str2 <<endl;
            }

        }
        else
            cout<<"try again"<<endl;
    }
    return 0;
}
