/*
CH-230-A
a6_p2.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
//defining the macro
#define LSBIT(c) {if((c & 1) == 1) printf("1\n"); else printf("0\n");}

int main()
{
    unsigned char ch;
    scanf("%c", &ch);
    //printing decimal representation
    printf("The decimal representation is: %d\n", ch);
    printf("The least significant bit is:");
    //calling the macro
    LSBIT(ch);

    return 0;
}
