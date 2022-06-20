/*
CH-230-A
a9_p8.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include <iostream>

using namespace std;

//subtracting function
void subtract_max(int *a, int n)
{
    int large = a[0];
    for (int i=1; i<n; i++)
    {
        if (a[i] > large)
        {
            large = a[i];
        }
    }
    for (int j=0; j<n; j++)
    {
        int res = a[j] - large;
        cout<< res <<" ";
    }
    cout << endl;

}
//deallocating memory function
void deallocate(int *a)
{
    delete[] a;
}

int main()
{
    int n;
    cin >> n;

    int* a = new int[n];

    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    //calling function
    subtract_max(a,n);
    deallocate(a);

}
