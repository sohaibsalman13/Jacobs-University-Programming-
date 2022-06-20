/*
CH-230-A
a5_p1.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>

/*function for making triangle*/
void tri(int n, char ch)
{
    for (int i=n; i>=1; i--)
    {
        for (int j=1; j<=i; j++)
        {
             printf("%c", ch);
        }
        printf("\n");
    }

}


int main()
{
    int n;
    char ch;
    /*taking input*/
    scanf("%d", &n);
    getchar();
    scanf("%c", &ch);
    getchar();
    /*calling function*/
    tri(n, ch);

    return 0;

}

