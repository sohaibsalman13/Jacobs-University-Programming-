/*
CH-230-A
a2_p8.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);//taking input

    if(a%2 == 0 && a%7 == 0)
        /*applying condition to the if statement
        by taking remiander of a divieded by 2 and 7
        equals to 0*/
        printf("The number is divisible by 2 and 7\n");
    else
        printf("The number is NOT divisible by 2 and 7\n");
    //printing statements

    return 0;
}
