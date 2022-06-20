/*
CH-230-A
a6_p6.c
Sohaib Salman
s.salman@jacobs-university.de
*/
#include <stdio.h>


int main() {
    unsigned char ch;

    scanf("%c", &ch);

    printf("The decimal representation is: %d\n", ch);
    printf("The binary representation is: ");

    // set mask to highest possible number in binary
    int bit_mask = 128;

    // loop to print binary form of scanned char
    while (bit_mask > 0) {
        // compares binary of char with bit_mask and prints accordingly
        if ((bit_mask & ch) == 0)
            printf("0");
        else
            printf("1");

        bit_mask = bit_mask >> 1;
    }
    printf("\n");

    return 0;
}
