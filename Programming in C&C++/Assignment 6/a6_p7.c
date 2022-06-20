/*
CH-230-A
a6_p7.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

//declaring functions
int bit_conv(char c);
int set3bits(char c, int x, int y, int z);

int main() {
    unsigned int x, y, z;
    unsigned char c;

    scanf("%c", &c);
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    printf("The decimal representation is: %d\n", c);
    printf("The binary representation is: ");
    //calling funtions
    bit_conv(c);

    printf("After setting the bits: ");

    set3bits(c, x, y, z);

    return 0;
}

int bit_conv(char c) {
     // set mask to highest possible number in binary
    int bit_mask = 128;


    // loop to print binary form of scanned char
    while (bit_mask > 0) {
        // compares binary of char with bit_mask and prints accordingly
        if ((bit_mask & c) == 0)
            printf("0");
        else
            printf("1");

        bit_mask = bit_mask >> 1;
    }

    printf("\n");
    return bit_mask;
}

int set3bits(char c, int x, int y, int z) {
    //turning on particular bits
    c |= (int) pow(2, x);
    c |= (int) pow(2, y);
    c |= (int) pow(2, z);
    bit_conv(c);
    return c;
}
