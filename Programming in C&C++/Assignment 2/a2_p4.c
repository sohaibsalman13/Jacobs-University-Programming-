/*
CH-230-A
a2_p3.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    float a, b, h;
    float sqr, rect, tri, trap;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);
    /* declaring and taking input
    of variable */

    sqr = a * a;
    rect = a * b;
    tri = 0.5 * a * h;
    trap = 0.5 * h * (a + b);
    /* Taking areas of the shapes
    by applying respective formulas */

    printf("square area=%f\n", sqr);
    printf("rectangle area=%f\n", rect);
    printf("triangle area=%f\n", tri);
    printf("trapezoid area=%f\n", trap);

    return 0;
}
