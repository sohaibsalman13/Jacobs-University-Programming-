/*
CH-230-A
a4_p3.[c]
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>
/*Declaring functions*/
float geometric_mean(float arr[], int num);
float high(float arr[], int num);
float low(float arr[], int num);
float sum(float arr[], int num);

int main()
{
    float arr[15];
    char c;
    int i;
    for(i=0; i<15; i++)
    {
        /*ending inputs after negative number*/
        scanf("%f", &arr[i]);
        if(arr[i] < 0)
            break;
    }

    getchar();

    scanf("%c", &c);

    /*applying switch cases for all functions*/
    switch(c)
    {
    case 'm':
        printf("the mean is=%f\n", geometric_mean(arr, i));
        break;
    case 'h':
        printf("the highest num is=%f\n", high(arr, i));
        break;
    case 'l':
        printf("the lowest num is=%f\n", low(arr, i));
        break;
    case 's':
        printf("the sum is=%f\n", sum(arr, i));
        break;
    }
    return 0;

}

float geometric_mean(float arr[], int num)
{
    float pro = 1.0;
    for(int j=0; j<num; j++);
    for(int k=0; k<num; k++)
    {
        pro = arr[k] * pro;
    }
    float mean = pow(pro,(float)1/num);
    return mean;

}

float high(float arr[], int num)
{
    /*loop for calculating highest value*/
    float max = arr[0];
    for(int q=0; q<num; q++)
    {
        if(arr[q] > max)
            max = arr[q];
    }
    return max;

}

float low(float arr[], int num)
{
    float min = arr[0];
    /*loop for calculating lowest value*/
    for(int y=0; y<num; y++)
    {

        if(arr[y] < min)
            min = arr[y];
    }
    return min;
}

float sum(float arr[], int num)
{
    /*loop for sum of values*/
    float sum = 0;
    for(int z=0; z<num; z++)
    {

        sum = arr[z] + sum;
    }
    return sum;
}
