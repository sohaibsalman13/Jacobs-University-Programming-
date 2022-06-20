/*
CH-230-A
a4_p9.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

/*declaring function*/
int prodminmax(int arr[], int n);

int main()
{
    int *arr, n;
    scanf("%d", &n);
    /*dynamics memory allocation*/
    arr = (int*) malloc(sizeof(int)*n);
    if (arr == NULL)
     exit(1);

    for (int j=0; j<n; j++)
    {
        scanf("%d", &arr[j]);
    }
    printf("product=%d\n", prodminmax(arr, n));
    /*releasing memory*/
    free(arr);
}


int prodminmax(int arr[], int n)
{
    int max, min, pro;
    max = arr[0];
    /*loop for maximum value*/
    for (int k=0; k<n; k++)
    {
        if (arr[k] > max)
            max = arr[k];
    }
     min = arr[0];
     /*loop for minimum value*/
     for (int l=0; l<n; l++)
    {
        if (arr[l] < min)
            min = arr[l];
    }

    pro = max * min;
    return pro;
}

