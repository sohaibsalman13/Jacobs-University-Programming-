 /*
CH-230-A
a4_p1.[c]
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>


int main()
{
    /*defining and inputting variables*/
    float x, xl, s;
    scanf("%f", &x);
    scanf("%f", &xl);
    scanf("%f", &s);

    /*loop for values*/
    for (float i=x; i<=xl; i+=s)
    {
        printf("%f %f %f\n", i, i*i*M_PI, 2*M_PI*i);

    }
    return 0;
}
