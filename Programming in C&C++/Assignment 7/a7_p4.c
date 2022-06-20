/*
CH-230-A
a7_p4c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void upper(char str[]);
void lower(char str[]);
void upp_low(char str[]);
void end();

// function pointer
void (*ptrfunc[]) (char *str) = {upper, lower, upp_low, end};

int main ()
{
    char str[100];
    int n = 0;

    // scan for string, ignores 'enter' as input
    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1]='\0';

    while(1)
    {
        scanf("%d", &n);
        // calls functions as position of string is input
        ptrfunc[n - 1] (str); // 'i - 1' as computer begins from position 0
    }

    return 0;
}

void upper(char str[])
{
    char cpy[100], c;

    // copy str into temporary string so original string is unaffected
    strcpy(cpy, str);

    int i = 0;
    // converts all letters in the string to upper case
    while(cpy[i] != '\0')
    {
        for(i = 0; i < strlen(cpy); ++i)
        {
            c = cpy[i];
            printf("%c", toupper(c));

        }
    }
    printf("\n");
}

void lower(char str[])
{
    char cpy[100], c;

    strcpy(cpy, str);

    int i = 0;
    // converts all letters in the string to lower case
    while(cpy[i] != '\0')
    {
        for(i = 0; i < strlen(cpy); ++i)
        {
            c = cpy[i];
            printf("%c", tolower(c));

        }
    }
    printf("\n");
}

void upp_low(char str[])
{

    char cpy[100], c;

    strcpy(cpy, str);

    int i = 0;
    // checks for case of character and lowers/uppers accordingly
    while(cpy[i] != '\0')
    {
        c = cpy[i];

        if(c == tolower(c))
            printf("%c", toupper(c));

        else if(c == toupper(c))
            printf("%c", tolower(c));
        i++;
    }
    printf("\n");
}

// deletes the character from the function
void end()
{
    exit(1);
}

