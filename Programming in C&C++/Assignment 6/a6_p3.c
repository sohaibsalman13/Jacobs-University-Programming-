/*
CH-230-A
a6_p3.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
//macro for determining minimum
#define MIN(a, b, c, min) \
{if((a<=b)&&(a<=c)) min = a;\
else if((b<=a)&&(b<=c))min = b;\
else min = c;}
//macro for determining maximum
#define MAX(a, b, c, max) {if((a>=b)&&(a>=c))\
max = a; else if((b>=a)&&(b>=c)) max = b;\
else max = c;}
//macro for finding out range
#define RANGE(min, max, range) {range = (min+max)/2.0 ;\
printf("%0.6f\n", range);}

int main()
{
    //taking values
    float a, b, c, min, max, range;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    printf("The mid-range is: ");
    //calling macros
    MIN(a, b, c, min);
    MAX(a, b, c, max);
    RANGE(min, max, range);

    return 0;
}
