/*
CH-230-A
a1_p1.[c]
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
int main() {
    double result; /* The result of our calculation */
    result = (3 + 1) / 5.0;

    /* The type of the variable "result" is defined as "double"
    but the program is dividing "4/5" which is integer so the program
     gives the integer value of the answer, in this case
    it is 0 because it is less than 1. By making the value 5.0 we make the number a double and the program
    gives the answer in double. */

    printf("The value of 4/5 is %lf\n", result);
    return 0;
}
