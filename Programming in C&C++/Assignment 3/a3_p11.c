/*
CH-230-A
a3_p11.[c]
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main()
{
    /*declaring arrays and taking input*/
    char one[100];
    char two[100];
    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin);

    /*eliminating the last space*/
    one[strlen(one)-1] = '\0';
    two[strlen(two)-1] = '\0';

    printf("length1=%d\n", (int)strlen(one));
    printf("length2=%d\n", (int)strlen(two));

    /*strings are compared before concatenation
    because strcat adds two into one*/
    int result = strcmp(one, two);

    printf("concatenation=%s\n", strcat(one, two));

    char three[100];
    strcpy(three, two);
    printf("copy=%s\n", three);

    /*giving correct output*/
    if (result < 0)
        printf("one is smaller than two\n");
    else if (result == 0)
        printf("one is equal to two\n");
    else
        printf("one is larger than two\n");


    char c;
    char *ptr;
    scanf("%c", &c);

    /*finding the first occurrence of character
    c in the string two*/
    ptr = strchr(two, c);
    /*if character not found*/
    if (ptr == NULL)
        printf("The character is not in the string\n");
    else
        /*printing position*/
        printf("position=%d\n", (int)(ptr-two));

    return 0;



}
