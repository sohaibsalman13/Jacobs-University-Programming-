/*
CH-230-A
a6_p5.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
//function for printing backwards
void convert(unsigned char ch){
    while (ch > 0)
    {
        //masking the bit one by one
        if ((ch & 1) == 0)
            printf("0");
        else
            printf("1");
            //right shifting bit by bit
        ch >>= 1;
    }
    printf("\n");
}

int main()
{
    unsigned char ch;
    scanf("%c", &ch);

    printf("The decimal representation is: %d\n", ch);
    printf("The backwards binary representation is: ");
    //calling funtion
    convert(ch);

    return 0;
}
