/*
CH-230-A
a5_p10.c
Sohaib Salman
s.salman@jacobs-university.de
*/
#include <stdio.h>
//declaring function
void rec_func(int n);

int main()
{
    int n;
    scanf("%d", &n);
    //calling function
    rec_func(n);
    return 0;

}

void rec_func(int n)
{
    if (n>1)
    {
        printf("%d\n", n-1);
        //calling the function within function
        rec_func(n-1);

    }
}

