/*
CH-230-A
a2_p10.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    int n; //initializing the variable
    while(n<1)  //loop to read until a positive value
        scanf("%d", &n);

    int count = 1; //declaring variable for iteration

    while(count != n+1){
        int mult = count * 24; //calculating hours
        if(count==1) //displaying the first day hours
        printf("%d day = %d hours\n",count,mult);

        //print statement to show hours corresponding to the days
        else
        printf("%d days = %d hours\n", count, mult);

        count++; //iterator incremented
    }
    return 0;
}
