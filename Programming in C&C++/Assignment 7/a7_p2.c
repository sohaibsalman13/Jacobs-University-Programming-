/*
CH-230-A
a7_p2.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
//defining struct
struct list
{
    char info;
    struct list * next;
    struct list * prev;
};

struct list * push_front(struct list * my_list, char character)
{
    //assigning struct pointer
    struct list * ch ;
    ch = (struct list *) malloc (sizeof (struct list));
    if (ch == NULL ) //checking malloc successful
    {
        printf (" Error allocating memory \n");
        return my_list ;
    }
     /*allocating the value and pointer to the next element*/
    ch -> prev = NULL;
    ch -> info = character ;
    ch -> next = my_list ;
    if (my_list == NULL)
    {
        return ch;
    }
    else
    {
        my_list ->prev = ch;
        return ch;
    }

    return ch ;
}
//function for removing element
struct list * remove_el(struct list * my_list, char character)
{
    struct list* cursor;
    struct list* b = NULL;
    struct list* f = NULL;
    cursor = my_list;
    int boole=0;
    //iterating to last element
    while (cursor != NULL)
    {
        if (cursor ->info == character)
        {
            boole=1;
            //if at first element
            if (cursor ->prev == NULL)
            {
                cursor=cursor->next;
                cursor->prev = NULL;
                my_list=cursor;
            }
            //if at last element
            else if (cursor ->next == NULL)
            {
                cursor=cursor->prev;
                cursor->next= NULL;
            }
            else
            {
                b =cursor -> prev ;
                f = cursor ->next ;
                cursor = f;
                cursor ->prev = b;
                cursor = b;
                cursor ->next = f;
            }
        }

        cursor =cursor ->next;
    }
    if (boole==0)
    {
        printf("The element is not in the list!\n");
    }
    return my_list;


}
//function for printing
void print_list(struct list* my_list)
{
    struct list* nextelem = my_list;
    while(nextelem != NULL)
    {
        printf("%c ", nextelem -> info);
        nextelem = nextelem -> next;
    }
    printf("\n");

}
//function for reversing
void reverse(struct list* my_list)
{
    if (my_list == NULL)
        return;
        //if at last element
    else if (my_list->next == NULL)
        printf("%c ", my_list->info);
    else
    {
        //recursive call to print
        reverse(my_list->next);
        printf("%c ", my_list->info);
    }


}

void free_mem( struct list * my_list )
{
    struct list * next_el ;
    while ( my_list != NULL )
    {
        next_el = my_list -> next ;
        free ( my_list );
        my_list = next_el;
    }
}

int main()
{
    int a;
    char character;
    //declaring list
    struct list * my_list = NULL;
    while (1)
    {
        scanf("%d", &a);
        getchar();
        //cases calling different functions
        switch (a)
        {
        case 1:
            scanf("%c", &character);
            getchar();
            my_list = push_front(my_list, character);
            break;

        case 2:
            scanf("%c", &character);
            getchar();
            my_list = remove_el(my_list, character);
            break;

        case 3:
            print_list(my_list);
            break;

        case 4:
            reverse (my_list);
            printf("\n");
            break;

        case 5:
            free_mem(my_list);
            exit(1);
        }
    }
    return 0;
}
