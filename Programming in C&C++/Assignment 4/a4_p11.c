/*
CH-230-A
a4_p11.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//function to convert to lower characters
int count_insensitive(char *str, char c)
{
    int i,count = 0;
    char low = tolower(c);
    for (i=0; i<strlen(str); i++)
    {
        if(str[i] == low)
            count++;
    }
    return count;
}


int main()
{
    //initialization and declaration
    char *str, *str2;
    int i,j, counter = 0;
    char alpha[] = {'b','H','8','u','$'};

    /*dynamics memory allocation*/
    str = (char*) malloc(sizeof(char)* 50);
    if (str == NULL)
        exit(1);

    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1]='\0';

    str2 = (char*) malloc(sizeof(char)* strlen(str));
    if (str2 == NULL)
        exit(1);

    strcpy(str2, str); //copying to new char string

    free(str);

    for(i=0; i<strlen(str2); i++)
    {
        if((str2[i] >= 'A') && (str2[i] <= 'Z'))
            str2[i] = tolower(str2[i]);
    }

    //printing for all five chars
    for(j=0; j < 5 ; j++){
        counter = count_insensitive(str2, alpha[j]);
        printf("The character '%c' occurs %d times\n", alpha[j],counter);
    }

    free(str2);

    return 0;


}

