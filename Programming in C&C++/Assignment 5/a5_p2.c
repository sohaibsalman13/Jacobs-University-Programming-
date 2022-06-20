/*
CH-230-A
a5_p2.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>

void divby5(float arr[], int size);

int main()
{
    //setting the array
    float arr[6] = {5.5, 6.5, 7.75,
                    8.0, 9.6, 10.36};
    printf("Before:\n");
    for(int i=0; i<6; i++)
    {
        printf("%.3f ", arr[i]);

    }
    //calling  the function
    divby5(arr, 6);
    printf("\nAfter:\n");
    //printing new values
    for(int j=0; j<6; j++)
    {
        printf("%.3f ", arr[j]);
    }
    printf("\n");
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
