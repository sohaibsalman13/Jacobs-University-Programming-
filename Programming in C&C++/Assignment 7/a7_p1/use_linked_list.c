#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

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
