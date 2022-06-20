/*
CH-230-A
a4_p8.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>

/*declaring function*/
void matrix(int mat[30][30],int n);
void diag(int mat[30][30], int n);

int main()
{
   int mat[30][30];
   int n;
   scanf("%d", &n);
    /*loop for taking values*/
   for(int i=0; i<n; i++)
   {
       for(int j=0; j<n; j++)
       {
           scanf("%d",&mat[i][j]);
       }

   }
   /*calling functions*/
    matrix(mat,n);
    diag(mat,n);

   return 0;
}

void matrix(int mat[30][30], int n)
{
    /*loop for showing matrix*/
    printf("The entered matrix is:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void diag(int mat[30][30], int n)
{
    /*loop for printing diagonal*/
    printf("Under the secondary diagonal:\n");
    for(int i=0; i<n; i++)
    {
        /*the relation ship between row and column
        is column = - row. Hence the equivalent
        relation is set to j = n - i to get the values
        under second diagonal*/
        for(int j= n-i; j<n; j++)
        {
                printf("%d ", mat[i][j]);

        }
    }
    printf("\n");
}

