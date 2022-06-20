/*
CH-230-A
a7_p5.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>

//functions comparing values
int asc(const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
//comparing in reverse for descending
int dec(const void * a, const void * b)
{
    return (*(int*)b - *(int*)a );
}

int main()
{
    int n;
    char c;
    scanf("%d", &n);
    int arr[n];
    //taking input
    for (int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
    getchar();


    while(1)
    {
        scanf("%c", &c);
        getchar();
        switch (c)
        {
            //case for ascending sort
        case 'a':
            qsort(arr, n, sizeof(arr[0]), asc);
            for( int i=0 ; i<n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        case 'd':
            //case for descending sort
            qsort(arr, n, sizeof(arr[0]), dec);
            for( int i=0 ; i<n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        case 'e':
            exit(1);
        }

    }
    return 0;
}



