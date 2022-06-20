/*
CH-230-A
a5_p3.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

//decalring function
int countlower(char *str);

int main()
{
    char arr[50];
    while(1)
    {
        //getting input
        fgets(arr, sizeof(arr), stdin);
        if (strcmp(arr,"\n")==0)
            return 0;
            //calling function
        printf("%d\n", countlower(arr));
    }
    return 0;

}

int countlower(char *str)
{
    int count = 0;
    for (int i=0; (*(str+i))!= '\0'; i++)
    {
        //counting number of lowercase characters
        if ((*(str+i)) >= 'a' &&  (*(str+i)) <= 'z')
            count++;
    }
    return count;
}
