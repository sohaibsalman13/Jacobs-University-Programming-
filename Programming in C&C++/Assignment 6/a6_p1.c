/*
CH-230-A
a6_p1.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
//defining the macro
#define SWAP(x, y, t){t z; z=x; x=y; y=z;}

int main()
{
    int a, b;
    double c, d;
    //taking input
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);
    //calling the macro
    SWAP(a, b, int);
    SWAP(c, d, double);
    //printing result
    printf("After swapping:\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%lf\n", c);
    printf("%lf\n", d);

    return 0;
}
