/*
CH-230-A
a6_p9.c
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

//struct function declaration
struct list * push_back(struct list * my_list, int value);
struct list * push_front(struct list * my_list, int value);
struct list * remove_el(struct list * my_list);
struct list * add_el (struct list * my_list, int position, int value);
struct list* reverse(struct list* my_list);
void print_list (struct list * my_list);
void dispose_list ( struct list * my_list );

int main()
{
    char a;
    int value, position;
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

        case 'R':
            my_list = reverse(my_list);
            break;

        case 'i':
            getchar();
            scanf("%d", &position);
            scanf("%d", &value);
            my_list = add_el(my_list, position, value);
            getchar();
            break;

        case 'q':
            dispose_list (my_list);
            exit(1);
        }

    }
    return 0;
}

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
    {

        return num ;
    }
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
    if (num == NULL ) //checking malloc successful
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

struct list* add_el(struct list* my_list, int position, int value)
{
    struct list* cursor, *prev, *place, *newel;
    cursor = my_list;
    prev = my_list;

    int size = 0;
    for(place = my_list; place; place = place->next)
    {
        size++;
    }
    // check for input of position
    if (position < 0 || position > size)
    {
        printf("Invalid position!\n");
        return my_list;
    }

    if (position == 0)
    {
        my_list = push_front(my_list, value);
        return my_list;
    }

    newel = (struct list*) malloc(sizeof(struct list));
    if (newel == NULL)   //check if malloc successful
    {
        printf("Error allocating memory\n");
        return my_list;
    }

    newel->info = value;  //setting new value attributes
    newel->next = NULL;

    for(int i = 0; i != position; i++)
    {
        prev = prev->next; //loop for checking position before required
    }
    newel->next = prev;
    for(int j = 0 ; j != position - 1; j++)
    {
        cursor = cursor->next; //assigning forward element after value
    }
    cursor->next = newel; //adding new value in between
    return my_list;
}

struct list* reverse(struct list* my_list)
{
    //initializing the variables for reference
    struct list *prev = NULL, *cursor, *next = NULL;
    cursor = my_list;  //storing in temporary var
    while(cursor != NULL)  //till end of list
    {
        next = cursor->next; //assign first value to next
        cursor->next = prev;
        prev = cursor; //assign last value to first
        cursor = next;
    }
    cursor = prev;
    return cursor;
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
    struct list * next_el ;
    while ( my_list != NULL )
    {
        next_el = my_list -> next ;
        free ( my_list );
        my_list = next_el;
    }
}

