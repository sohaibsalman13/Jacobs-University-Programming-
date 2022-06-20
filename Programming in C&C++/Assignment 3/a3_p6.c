/*
CH-230-A
a3_p6.[c]
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>

/*Declaring function*/
float to_pounds (int kg, int g);


int main()
{
    int kg, g;
    scanf("%d", &kg);
    scanf("%d", &g);
    /*calling function to_pounds*/
    printf("Result of conversion: %f\n", to_pounds(kg, g));
    return 0;


}

float to_pounds(int kg, int g)
{
    /*applying conversions and
    returning value*/
    float pounds= (kg * 2.2) + (g * 0.0022);
    return pounds;
}
