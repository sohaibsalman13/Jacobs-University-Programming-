/*
CH-230-A
a4_p5.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

/*declaring function*/
int count_consonants(char str[]);

char str[100];
int main()
{
    while(1)
    {
        /*getting input*/
        fgets(str, sizeof(str), stdin);
        /*loop for showing consonants and breaking
        if input is empty*/
        if (str[0] == '\n')
            break;
        printf("Number of consonants=%d\n", count_consonants(str));
    }
    return 0;
}
/*we have assigned the first value array to a pointer*/
int count_consonants(char *str)
{
    int i;
    int con=0;
    for (i=0; i<strlen(str); i++){
            /*now the loop will move check each value
            in string one by one and increment the
            pointer value by i*/
        if (((*(str+i))>= 'a' && (*(str+i))<= 'z')||
            ((*(str+i))>='A' && (*(str+i))<='Z'))
        {
            /*loop for taking consonants*/
           if ((*(str+i)) != 'a'&& (*(str+i))!='e'&& (*(str+i))!='i'
               && (*(str+i))!='o'&&(*(str+i))!='u'
               && (*(str+i))!='A'&& (*(str+i))!='E'
               && (*(str+i))!='I'&& (*(str+i))!='O'&& (*(str+i))!='U')
                con++;
        }

    }
        return con;

}
