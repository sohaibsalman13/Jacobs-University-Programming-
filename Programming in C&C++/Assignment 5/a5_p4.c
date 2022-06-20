/*
CH-230-A
a5_p4.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
//declaring function
void divby5(float arr[], int size);

int main()
{
    //setting the array
    float *arr;
    int n;
    scanf("%d", &n);
    //allocating dynamic memory
    arr = (float*) malloc(sizeof(float)*n);
    if (arr == NULL)
     exit(1);

    for(int i=0; i<n; i++)
    {
        //taking input
        scanf("%f", &arr[i]);

    }
    printf("Before:\n");
    for (int l=0; l<n; l++)
    {
        printf("%.3f ", arr[l]);
    }

    //calling  the function
    divby5(arr, n);
    //printing new values
    printf("\nAfter:\n");
    for(int j=0; j<n; j++)
    {
        printf("%.3f ", arr[j]);

    }
    printf("\n");
    //freeing the memory
    free(arr);

    return 0;

}

void divby5(float arr[], int size)
{

    //loop for dividing by 5
    for (int x=0; x<size; x++)
    {
        arr[x] = arr[x] / 5;

    }
}
