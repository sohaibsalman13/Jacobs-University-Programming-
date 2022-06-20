/*
CH-230-A
a3_p8.[c]
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>

//declaring functions
float sum(float arr[], int a);
float average(float arr[], int a);

int main()
{
    /*declaring variables;
    a is variable storing number of
    entered values to be used in sum
    and average functions*/
    int a = 0;
    int i;
    float arr[10];

    /*loop for taking input*/
    for (i=0; i<10; i++)
    {
        a++;
        scanf("%f", &arr[i]);
        /*terminating at -99*/
        if (arr[i] == -99)

            break;

        }

    printf("sum is=%f\n", sum(arr, a));
    printf("average is=%f\n", average(arr, a));

}

float sum(float arr[], int a)
{
    int x;
    float sum = 0;
    /*loop for summing inputs*/
    for (x=0; x<a; x++)
    {
        if(arr[x] != -99)
            sum += arr[x];
        else
            break;
    }
    return sum;
}

float average(float arr[], int a)
{
    int y;
    int j=0;
    float sum = 0;
    /*loop for average of values*/
    for (y=0; y<a; y++)
    {
        if(arr[y] != -99)
        {
            sum += arr[y];
            j++;
        }
        else
            break;
    }
    return sum/j;
}
