/*
CH-230-A
a3_p6.[c]
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, int m, char c)
{
    int i;
    /*Loop for rows*/
    for (i=0; i<n; i++)
    {
        int a;
        /*Loop for columns*/
        for (a=0; a<m+i; a++)
        {
            printf("%c", c);


        }
        /*breaking lines vertically*/
        printf("\n");
    }
}

int main()
{
    /*declaring and taking input
    of varibales*/
    int n, m;
    char c;
    scanf("%d %d", &n, &m);
    getchar();
    scanf("%c", &c);
    /*calling function*/
    print_form(n,m,c);
}


