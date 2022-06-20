/*
CH-230-A
a5_p9.c
Sohaib Salman
s.salman@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

//declaring function
void read_mat(int ***mat, int x, int y, int z);
void print_mat(int ***mat, int x, int y, int z);

int main()
{
    int ***dyn_arr, r, c, d;
    scanf("%d", &r);
    scanf("%d", &c);
    scanf("%d", &d);

    //dynamically allocating memory of 3d array
    dyn_arr = (int***) malloc(sizeof(int**)* r);
    if (dyn_arr == NULL)
        exit(1);

    for (int i=0; i<r; i++)
    {
        dyn_arr[i] = (int**) malloc(sizeof(int*)* c);
        if(dyn_arr[i]==NULL)
            exit(1);
        for (int j=0; j<c; j++){
            dyn_arr[i][j] = (int*) malloc(sizeof(int)* d);
            if(dyn_arr[i][j]==NULL)
                exit(1);
             }
    }
    //calling function
    read_mat(dyn_arr,r,c,d);
    print_mat(dyn_arr,r,c,d);

    //freeing memory
    for (int i = 0; i<r ; i++){
        for (int j=0; j<c;j++)
            free(dyn_arr[i][j]);
        free(dyn_arr[i]);
    }
    free(dyn_arr);




}
//function for taking input
void read_mat(int ***mat, int x, int y, int z)
{
    for(int i=0; i<x; i++)
    {
        for (int j=0; j<y; j++)
        {
            for (int k=0; k<z; k++)
            {
                scanf("%d", &mat[i][j][k]);
            }

        }
    }
}
//function for printing 2D section of the array
void print_mat(int ***mat, int x, int y, int z)
{
    for(int i=0; i<z; i++)
    {
        printf("Section %d:\n",i+1);
        for(int j=0; j<x; j++)
        {
           for (int k=0; k<y; k++)
           {
                printf("%d ", mat[j][k][i]);
           }
           printf("\n");
        }

    }

}
