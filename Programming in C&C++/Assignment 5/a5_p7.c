/*
CH-230-A
a5_p7.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//function for concatenation
void concat_strings(char *concstr, char str1[], char str2[]){
    concstr = strcat(str1, str2);
    printf("Result of concatenation: %s\n", concstr);
}

int main()
{
    //declaring strings
    char str1[100];
    char str2[100];
    char *concstr;

    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1)-1] = '\0';
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2)-1] = '\0';

    //dynamically allocating memory
    concstr = (char*) malloc(sizeof(char)*(strlen(str1)+strlen(str2)));
    if (concstr == NULL)
        exit(1);

    concat_strings(concstr,str1,str2);

    //freeing memory
    free(concstr);
    return 0;


}
