#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

//function for adding element at the end of list
struct list * push_back(struct list * my_list, int value)
{
    struct list * position, * num ;
    position = my_list ;
    num = (struct list *) malloc (sizeof ( struct list ));
    if ( num == NULL )
    {
        printf (" Error allocating memory \n");
        return my_list ;
    }
    /*allocating the value and pointer to the next element*/
    num -> info = value ;
    num -> next = NULL ;
    if ( my_list == NULL )
        return num ;
        /*loop for adding element at the end of the list*/
    while ( position -> next != NULL )
        position = position -> next ;
    position -> next = num ;
    return my_list ;
}
//function for adding element at the start of list
struct list * push_front(struct list * my_list, int value)
{
    struct list * num ;
    num = (struct list *) malloc (sizeof ( struct list ));
    if (num == NULL )
    {
        printf (" Error allocating memory \n");
        return my_list ;
    }
    num -> info = value ;
    num -> next = my_list ;
    return num ;
}
//function for removing the first element
struct list * remove_el(struct list * my_list)
{
    if (my_list == NULL)
        return NULL;
        //allocating the list to a temporary element
    struct list * t_el = my_list;
    my_list = my_list -> next;
    //freeing the temporary element
    free(t_el);

    return my_list;

}

void print_list (struct list * my_list)
{
    struct list *p;
    for (p = my_list ; p; p = p-> next )
    {
        printf ("%d ", p-> info);
    }
    printf("\n");
}
//function for freeing memory
void dispose_list ( struct list * my_list )
{
    struct list * nextelem ;
    while ( my_list != NULL )
    {
        nextelem = my_list -> next ;
        free ( my_list );
        my_list = nextelem ;
    }
}

