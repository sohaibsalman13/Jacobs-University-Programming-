/*
CH-230-A
a9_p6.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>
#include <cmath>


using namespace std;


//function if integers are passed
int myfirst(int *x)
{
    for (int i=0; i<(int)sizeof(x); i++)
    {
        if ((x[i]>0 && x[i]%2 == 0))
        {
            return x[i];
            break;
        }
    }
    return -1;
}

//function if doubles are passed
double myfirst(double *y)
{
    for (int i=0; i<(int)sizeof(y); i++)
    {
        if ((y[i]<0 && y[i] == (int)y[i]))
        {
            return y[i];
            break;
        }
    }
    return -1.1;
}
//function if chars are passed
char myfirst(char *c)
{
    for (int i=0; i<(int)sizeof(c); i++)
    {
        if (c[i]!='A' && c[i]!='E' &&
                c[i]!='I' && c[i]!='O' &&
                c[i]!='U' && c[i]!='a' &&
                c[i]!='e' && c[i]!='i' &&
                c[i]!='o' && c[i]!='u')
        {
            return c[i];
            break;
        }
    }

    return '0';
}



int main()
{
    int x[5] = {3, -1, 5, 4, 8};
    double y[5] = {6.0, -2.2, -7.0, 6.4, -8.0};
    char c[5] = {'a', 'U', 'c', 'b', 'e'};


    //output
    cout<<myfirst(x)<<endl;
    cout<<myfirst(y)<<endl;
    cout<<myfirst(c)<<endl;

    return 0;

}
