/*
CH-230-A
a4_p10.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

void  proddivpowinv(float a, float b, float*prod,
                    float*div, float*pwr, float*invb)

{
    /*mathematical operations*/
    *prod = a*b;
    *div = a/b;
    *pwr = pow(a,b);
    *invb = 1/b;

}

int main()
{
    float a, b, prod, div, pwr, invb;
    scanf("%f", &a);
    scanf("%f", &b);
    /*declaring function*/
    proddivpowinv(a,b,&prod,&div,&pwr,&invb);
    /*printing the output*/
    printf("%f\n%f\n%f\n%f\n%f\n%f\n", a,b,prod,div,pwr,invb);

    return 0;


}
