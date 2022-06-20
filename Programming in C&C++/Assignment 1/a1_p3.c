/*
CH-230-A
a1_p3.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
/* The symbol "#" was missing */

int main()
{
    float result; /*The result of the division*/
    int a = 5;
    float b = 13.5;
    /* The type of the variable "b" was declared "int".
    Variable type changed to "float" */
    result = a / b;
    printf("The result is %f\n", result);
    /* Wrong formatting character "%d" was given.
    character changed to "%f" for float */
    return 0;
}
