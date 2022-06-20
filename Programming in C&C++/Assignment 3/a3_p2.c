/*
CH-230-A
a3_p2.[c]
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char ch;
    int n;
    /*declaring varibale*/

    scanf("%c",&ch);
    getchar();
    scanf("%d", &n);
    /*Getting input*/

    printf("ch=%c\n", ch);
    int i;
    for(i=1;i<n+1;i++){
        printf("ch-%d=%c\n",i,ch-i);
    /*Loop for decreasing ch by 1 until n*/

    }

    return 0;
}
