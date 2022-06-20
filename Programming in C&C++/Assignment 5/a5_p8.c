/*
CH-230-A
a5_p8.c
Sohaib Salman
s.salman@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

//function for reading matrix
void read_mat(int **mat, int x, int y)
{
    for(int i=0; i<x; i++)
    {
        for (int j=0; j<y; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

//function for printing matrix
void print_mat(int **mat, int x, int y)

{

    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

}


//function for calculating product
void multiply_mat(int **mat1,int  **mat2,int **mat3, int n,int m, int p)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<p; j++)
        {
            mat3[i][j] = 0;
            for(int k=0; k<m; k++)
            {
               //adding products of elements of given row and column
               mat3[i][j] = mat3[i][j]+ (mat1[i][k]* mat2[k][j]);
            }
        }
    }
}

int main()
{
    //taking dimensions as input
    int i,n,m,p,**mat1, **mat2, **mat3;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);

        //dynamically allocating memory
    mat1 = (int**)malloc(sizeof(int*)* n);
    if (mat1==NULL)
        exit(1);
    for (i=0; i<n; i++)
    {
        mat1[i] = (int*) malloc(sizeof(int)*m);
        if(mat1[i]==NULL)
            exit(1);
    }

    mat2 = (int**)malloc(sizeof(int*)* m);
    if (mat2==NULL)
        exit(1);
    for (i=0; i<m; i++)
    {
        mat2[i] = (int*) malloc(sizeof(int)*p);
        if(mat2[i]==NULL)
            exit(1);
    }
    mat3 = (int**)malloc(sizeof(int*)* n);
    if (mat3==NULL)
        exit(1);
    for (i=0; i<n; i++)
    {
        mat3[i] = (int*) malloc(sizeof(int)*p);
        if(mat3[i]==NULL)
            exit(1);
    }

    //calling functions
    read_mat(mat1, n, m);
    read_mat(mat2, m, p);
    printf("Matrix A:\n");
    print_mat(mat1, n, m);
    printf("Matrix B:\n");
    print_mat(mat2, m, p);
    multiply_mat(mat1, mat2, mat3, n, m, p);
    printf("The multiplication result AxB:\n");
    print_mat(mat3,n,p);

    //freeing memory
    for (int i = 0; i<n ; i++){
        free (mat1[i]);
    }
    free(mat1);

    for (int j = 0; j<m ; j++)
    {
        free (mat2[j]);
    }
    free (mat2);

    for (int k = 0; k<n ; k++)
    {
        free (mat3[k]);
    }
    free (mat3);

    return 0;

}

