/*
CH-230-A
a13_p3.[c]
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>

/*The convert function is called*/
float convert(int cm)
    {
    /*Conversion is done*/
        float km = cm / 100000.0;
        return km;
    }

int main()
{
    int cm;
    scanf("%d", &cm);
    printf("Result of conversion: %f\n", convert(cm));
    /*function is called*/

}
