/*
CH-230-A
a2_p3.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int w, d, h, t;
    scanf("%d", &w);
    scanf("%d", &d);
    scanf("%d", &h);
    w = ((w * 7)* 24);
    //Converting weeks to hours
    d = d * 24;
    //Converting days to hours
    t = w + d + h;
    printf("Total hours=%d\n", t);
    //Total hours

    return 0;
}
