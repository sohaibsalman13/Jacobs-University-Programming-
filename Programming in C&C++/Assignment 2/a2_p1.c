/*
CH-230-A
a2_p1.c
Sohaib Salman
s.salman@jacobs-university.de
*/


#include<stdio.h>

int main()
{
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    getchar();
    char c, d;
    scanf("%c", &c);
    getchar();
    scanf("%c", &d);

    double sum = a + b;
    printf("sum of doubles=%lf\n", sum);

    double diff = a - b;
    printf("difference of doubles=%lf\n", diff);

    double sqr = a * a;
    printf("square=%lf\n", sqr);


    int sum2 = x + y;
    int pro2 = x * y;
    printf("sum of integers=%d\n", sum2);
    printf("product of integers=%d\n", pro2);


    int sum3 = c + d;
    int pro3 = c * d;
    printf("sum of chars=%d\n", sum3);
    printf("product of chars=%d\n", pro3);
    printf("sum of chars=%c\n", sum3);
    printf("product of chars=%c\n", pro3);

    return 0;


}
