/*
CH-230-A
a4_p2.[c]
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main()
{
    /*Taking the input of string*/
    char str[50];
    fgets(str, sizeof(str), stdin);
    /*Eliminating the last space*/
    str[strlen(str)-1] = '\0';

    /*Loop for printing zigzag*/
    for(int i=0; i<strlen(str); i++)
    {
        if (i%2 == 1)
        printf(" %c\n", str[i]);
        else
        printf("%c\n", str[i]);
    }
    return 0;
}
