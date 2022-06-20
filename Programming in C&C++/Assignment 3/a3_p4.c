/*
CH-230-A
a13_p3.[c]
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>

int position(char str[], char c)
{
    int idx;
    /*Loop until end of string*/
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx) {}
    /*By closing the for loop we have
    taken return idx outside the loop
    to return only one value which previously
    was returning values in loop*/
    return idx;
}

int main()
{
    char line[80];
    while (1)
    {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    }
}
