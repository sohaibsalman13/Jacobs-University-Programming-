/*
CH-230-A
a5_p6.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
//declaring function
void countneg(float arr[], int n);

int main()
{
    int n;
    scanf("%d", &n);
    float arr[n];
    for (int i = 0; i<n; i++)
    {
        //taking input in array
        scanf("%f", &arr[i]);
    }
    countneg(arr, n);
    return 0;


}

void countneg(float arr[], int n)
{
    int count = 0;
    int i=0;
    /*loop for counting elements before
    first negative value; using pointer arithematic*/
    while ((*(arr+i)) >= 0)
    {
        count ++;
        i++;

    }
    printf("Before the first negative value: %d elements", count);


}
