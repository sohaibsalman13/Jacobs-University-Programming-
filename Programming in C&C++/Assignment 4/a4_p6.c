/*
CH-230-A
a4_p6.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void twolargestint(int d_arr[], int n)
{
    int max, smax;
    max=d_arr[0];
    /*loop for greatest value*/
    for (int j=0; j<n; j++)
    {
        if (d_arr[j] > max)
            max = d_arr[j];
    }
    smax=0;

    if (max != d_arr[0]) //finding index of second
        smax = d_arr[0];

    for (int l=0; l<n; l++)
    {
        //if number is larger but not larger than max
        //assign it to second max
        if (d_arr[l] > smax && d_arr[l] < max)
            smax = d_arr[l];
    }
    printf("Highest num is=%d\n", max);
    printf("second highest num is=%d\n", smax);
}

int main()
{
    int *d_arr, n, i;
    scanf("%d", &n);

    /*dynamically allocating memory of array*/
    d_arr = (int*) malloc(sizeof(int) * n);
    if (d_arr == NULL)
        exit(1);

    /*loop for taking input*/
    for (i=0; i<n; i++)
    {
        scanf("%d", &d_arr[i]);
    }

    twolargestint(d_arr,n);
    /*releasing the memory*/
    free(d_arr);
}
