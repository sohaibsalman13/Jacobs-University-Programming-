/*
CH-230-A
a1_p4.c
Sohaib Salman
s.salman@jacobs-university.de
*/

# include <stdio.h>

int main()
{
    int x = 17;
    int y = 4;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    int sum = x + y;
    printf("sum=%d\n", sum);
    int product = x * y;
    printf("product=%d\n", product);
    int diff = x - y;
    printf("difference=%d\n", diff);
    float div = (float) x/y;
    printf("division=%f\n", div);
    int remain = x % y;
    printf("remainder of division=%d\n", remain);
    return 0;

}
