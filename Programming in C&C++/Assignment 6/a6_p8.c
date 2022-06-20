/*
CH-230-A
a6_p8.c
Sohaib Salman
s.salman@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>


struct list
{
    int info;
    struct list * next;
};
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


int main()
{
    char a;
    int value;
    //declaring list
    struct list * my_list = NULL;
    while (1)
    {
        scanf("%c", &a);
        //cases calling different functions
        switch (a)
        {
        case 'a':
            scanf("%d", &value);
            getchar();
            my_list = push_back(my_list, value);
            break;

        case 'b':
            scanf("%d", &value);
            getchar();
            my_list = push_front(my_list, value);
            break;

        case 'r':
            my_list = remove_el(my_list);
            break;

        case 'p':
            print_list (my_list);
            break;

        case 'q':
            dispose_list (my_list);
            return 0;
        }

    }
    return 0;
}
