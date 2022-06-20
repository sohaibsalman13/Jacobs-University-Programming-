/*
CH-230-A
a6_p4.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#define INTERMEDIATE

void inter(int x[], int y[], int n);
void scalerprod(int x[], int y[], int n);

int main()
{
    int n, *x, *y;
    scanf("%d", &n);
    /*dynamically allocating memory because the
     the first array was overriding because of the same
     elements*/
    x=(int*) malloc(sizeof(int)*n);
    y=(int*) malloc(sizeof(int)*n);

    if(x == NULL || y == NULL)
        exit(1);

    for (int i=0; i<n; i++)
    {
        scanf("%d", &x[i]);
    }
    for (int j=0; j<n; j++)
    {
        scanf("%d", &y[j]);
    }
    #ifdef INTERMEDIATE
        inter(x,y,n);
    #endif
    scalerprod(x,y,n);
//freeing memory
    free(x);
    free(y);

    return 0;
}

void inter(int x[], int y[], int n)
{
    //determining the intermediate values
    printf("The intermediate values are:\n");
    int  prod;
    for (int i=0; i<n; i++)
    {
        prod =  (x[i] * y[i]);
        printf("%d\n", prod);
    }
}

void scalerprod(int x[], int y[], int n)
{
    //determining the product
    int  prod = 0;
    for (int i=0; i<n; i++)
    {
        prod = prod + (x[i] * y[i]);
    }
    printf("The scalar product is: %d\n", prod);
}

