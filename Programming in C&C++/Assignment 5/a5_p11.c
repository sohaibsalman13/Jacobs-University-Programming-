/*
CH-230-A
a5_p11.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
//declaring function
int prime(int num, int x);
int main()
{
    int n;
    scanf("%d",&n);

    int val = prime(n, n/2);
    //printing output
    if(val == 1)
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);

    return 0;

}
//function determining prime or not
int prime(int num, int x){

    if(x == 1) {
        return 1;
    }
    else if (x == 0) {
        return 0;
    }
    else {
        if(num % x == 0)
            return 0;
        else
            //calling function within function
            return prime(num, x - 1);
    }
}
