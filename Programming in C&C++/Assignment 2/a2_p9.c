/*
CH-230-A
a2_p9.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    char a; //initializing variable
    scanf("%c", &a); //reading from keyboard

    //check if character is a letter
    if((a>='A' && a<='Z')||(a>='a' && a<='z'))
        printf("%c is a letter\n",a);

    //else checking if it is a digit
    else if (a>='0' && a<='9')
        printf("%c is a digit\n",a);

    //else printing the character as symbol
    else
        printf("%c is some other symbol\n",a);

    return 0;
}
