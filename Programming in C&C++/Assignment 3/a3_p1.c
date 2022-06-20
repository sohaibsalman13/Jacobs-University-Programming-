/*
CH-230-A
a3_p1.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    float x;
    int n;
    scanf("%f", &x);
    scanf("%d", &n);
    /* Taking inputs form keyboard*/

    while(n<=0)
    {
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    }
    /* Loop for continued input of n
    if n is invalid*/

    for(int i = 0; i<n; i++)
        printf("%f\n", x);
    /* Printing x, n times*/
    return 0;

}
