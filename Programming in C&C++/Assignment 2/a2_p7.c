/*
CH-230-A
a2_p7.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int i = 8;
    while (i >= 4){
        printf("i is %d\n", i);
        i--;}
    /* Before the while loop only took
    into account the printf() statement.
    We add curly brackets to include i-- statement*/

    printf("That’s it.\n");
    return 0;
}
