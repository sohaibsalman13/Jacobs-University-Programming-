/*
CH-230-A
a4_p12.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

//function prototype
void replaceAll(char *str, char c, char e);

int main()
{
    char str[80];
    char c,e;
    while(1)
    {
        fgets(str, sizeof(str), stdin);
        str[strlen(str)-1]='\0';
        if (strcmp(str,"stop")== 0)
            return 0;
        scanf("%c",&c); //scanning chars
        getchar();
        scanf("%c",&e);
        getchar();

        //printing the results
        printf("%c\n%c\n%s\n",c,e,str);
        replaceAll(str,c,e); //calling the func
        printf("%s\n",str);
    }
    return 0;
}

//replace e with char c
void replaceAll(char *str, char c, char e)
{
    for (int i=0; i<strlen(str); i++)
    {
        if(str[i] == c)
            str[i] = e;
    }
}
