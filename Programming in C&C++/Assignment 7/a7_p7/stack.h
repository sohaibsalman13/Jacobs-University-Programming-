/*
CH-230-A
a7_p7.c
Sohaib Salman
s.salman@jacobs-university.de
*/


typedef struct stack{
    unsigned int count;
    int array[12];
} Stack;

Stack init(Stack obj);
Stack push(Stack obj, int n);
Stack pop(Stack obj);
int isEmpty(Stack obj);
Stack empty(Stack obj);
