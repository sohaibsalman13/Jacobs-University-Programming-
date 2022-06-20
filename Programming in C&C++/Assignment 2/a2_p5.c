/*
CH-230-A
a2_p5.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("value of a=%d\n", a);
    /* Taking input and outputing
    initial value of a  */

    int *ptr_a; //declaring pointer
    ptr_a = &a; // assigning pointer to a
    printf("address of a=%p\n", ptr_a);

    *ptr_a = *ptr_a + 5;//incrementing value of pointer
    printf("New address of a=%p\n", ptr_a);
    printf("New value of a=%d\n", *ptr_a);

    return 0;
}
