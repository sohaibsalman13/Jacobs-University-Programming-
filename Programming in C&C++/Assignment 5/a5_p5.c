/*
CH-230-A
a5_p5.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>

//declaring functions
double scalerprod(double v[], double w[], int n);
void small_num(double a[], int n);
void large_num(double a[], int n);

int main()
{
    int n;
    scanf("%d", &n);
    double v[n];
    double w[n];
    //taking inputs in vectors
    for (int i=0; i<n; i++)
    {
        scanf("%lf", &v[i]);
    }
    for (int j=0; j<n; j++)
    {
        scanf("%lf", &w[j]);
    }
    //calling functions
    printf("Scalar product=%f\n", scalerprod(v,w,n));
    small_num(v,n);
    large_num(v,n);
    small_num(w,n);
    large_num(w,n);

    return 0;
}
//function for scaler product
double scalerprod(double v[], double w[], int n)
{
    double  prod = 0.00;
    for (int i=0; i<n; i++)
    {
        prod = prod + (v[i] * w[i]);
    }
    return prod;
}
//function for smallest number
void small_num(double a[], int n)
{
    int pos=0;
    double min = a[0];
    for (int i=0; i<n; i++)
    {
        if (a[i]<min){
            min = a[i];
            pos = i;
        }
    }
    printf("The smallest = %lf\n",min);
    printf("Position of smallest = %d\n",pos);

}

//function for largest number
void large_num(double a[], int n)
{
    int pos=0;
    double max = a[0];
    for (int i=0; i<n; i++)
    {
        if (a[i]>max){
            max = a[i];
            pos = i;
        }
    }
    printf("The largest = %lf\n",max);
    printf("Position of largest = %d\n",pos);

}




