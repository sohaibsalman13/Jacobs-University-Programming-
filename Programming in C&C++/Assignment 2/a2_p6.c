/*
CH-230-A
a2_p6.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    double x, y;
    scanf("%lf", &x);
    scanf("%lf", &y);
    // taking input

    double *ptr_one, *ptr_two, *ptr_three;
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;
    /*Initializing pointers and assigning
    the values*/

    printf("address of ptr_one=%p\n", ptr_one);
    printf("address of ptr_two=%p\n", ptr_two);
    printf("address of ptr_three=%p\n", ptr_three);
    //printing the addresses

    return 0;


}
