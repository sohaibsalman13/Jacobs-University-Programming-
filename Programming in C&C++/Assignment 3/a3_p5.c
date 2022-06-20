/*
CH-230-A
a3_p5.[c]
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    /*Variable declaration*/
    char c;
    int n;
    double arr[100];
    double sum;
    int a;
    int b;
    int e;
    double sum2;
    int d;

    scanf("%c", &c);
    getchar();
    scanf("%d", &n);

    /*taking values in array*/
    int i;
    for(i = 1; i < n+1; i++)
    {
        scanf("%lf", &arr[i]);
    }

    /*intiating switch for different cases*/
    switch (c)
    {
    case 's':
        /*summing temperatures*/
        for (a=1; a<n+1; a++)
        {
            sum += arr[a];

        }
        printf("sum of temperature=%lf\n", sum);
        break;

    case 'p':
        /*Listing all temperature values*/
        for (b=1; b<n+1; b++)
        {
            printf("temperature=%lf\n", arr[b]);
        }
        break;
    case 't':
        /*Listing temperature values
        in Fahrenheit*/
        for (e=1; e<n+1; e++)
        {
            printf("temperature in fahrenheit=%lf\n", ((arr[e]*1.8)+32));
        }
        break;
    default:
        /*giving mean as a default*/
        for (d=1; d<n+1; d++)
        {
            sum2 += arr[d];
        }
        printf("mean=%lf\n", sum2/n);

    }
    return 0;
}
