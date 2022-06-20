/*
CH-230-A
a3_p9.[c]
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>

/*declaring function*/
double sum25(double v[], int n);

int main()
{
    int n;
    double v[20];
    scanf("%d", &n);
    int i;
    /*loop for storing values in array*/
    for (i=0; i<n; i++)
    {
        scanf("%lf", &v[i]);
    }
    double result = sum25(v,n);
    if(result != -111)
        printf("sum=%lf\n",result);
    else
        printf("One or both positions are invalid\n");

}

double sum25(double v[], int n)
{
    double sum = 0;

    if (n < 6)
        return -111;
    /*adding 2nd and 5th values*/
    else{
        sum = v[2] + v[5];
        return sum;
    }

}
