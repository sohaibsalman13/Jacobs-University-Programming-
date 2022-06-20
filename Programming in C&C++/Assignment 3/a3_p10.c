/*
CH-230-A
a3_p10.[c]
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>

/*declaring functions*/
float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float*a, float*b);

int main()
{
    float a, b, p;
    scanf("%f%f", &a, &b);

    /*printing functions;
    for void functions, we first
    call and then print*/
    printf("%f\n", product(a, b));
    productbyref(a, b, &p);
    printf("%f\n", p);

    /*modifybyref d refrences the pointer
    and add 3 to a and 11 to b and stores
    the new values in the pointer reference*/
    modifybyref(&a, &b);
    printf("a = %f\nb = %f\n",a,b );


}

float product(float a, float b)
{

    float pro = a*b;
    return pro;
}

void productbyref(float a, float b, float *p)
{
    *p = a*b;
}

void modifybyref(float *a, float *b)
{
    *a = *a + 3.0;
    *b = *b + 11.0;
}


