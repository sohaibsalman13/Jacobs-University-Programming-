/*
CH-230-A
a7_p6.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


//struct declaration
struct person
{
    char name[30];
    int age;
};
//function for comparing age
int age( struct person a,  struct person b)
{
    if (a.age == b.age)
        //returning value based on name comparison
        return strcmp(a.name, b.name);
    else
        return a.age - b.age;
}

//function for comparing name
int name( struct person a,  struct person b)
{
    int comp = strcmp(a.name, b.name);
    if (comp == 0)
        //returning value based on age
        return a.age - b.age;
    else
        return comp;
}
//bubble sort function
void bubble_sort(struct person*arr, int n,
                int (*compare)(struct person a, struct person b))
{
    int swapped = 1;
    while(swapped)
    {
        swapped = 0;
        for (int i=1; i<n; i++)
        {
            if (compare(arr[i-1],arr[i])>0)
            {
                /*making temporary variable and storing
                first value in it then swapping them*/
                struct person temp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = temp;
                swapped = 1;
            }
        }
    }
}
//function for printing sorted name and age
void printPersons(struct person *arr, int persons) {
    for(int i = 0; i < persons; i++){
        printf("{%s, %d}; ", arr[i].name, arr[i].age);
    }
    printf("\n");
}


int main()
{
    int np;
    scanf("%d", &np);
    getchar();
    struct person * ppl;
    //dynamically allocating memory
    ppl = (struct person*) malloc(sizeof(struct person)*np);
    if(ppl==NULL)
        exit(1);

    for (int i=0; i<np; i++)
    {
        fgets(ppl[i].name, sizeof(ppl[i].name), stdin);
        //deleting last empty space
        ppl[i].name[strlen(ppl[i].name)-1] ='\0';
        scanf("%d", &ppl[i].age);
        getchar();
    }
    //calling sort and print functions
    bubble_sort(ppl, np, name);
    printPersons(ppl,np);
    bubble_sort(ppl, np, age);
    printPersons(ppl,np);

    free(ppl);
    return 0;
}


