/*
a self-referntial structure is a structure that can have members
which point to a structure of the same type
mostly used in dynamic data structures such as trees,linked lists and so on
SYNTAX
struct structure_name
{
    datatype datatype_name;
    structure_name * pointer_name
}
*/
#include<stdio.h>
struct ref
{
    int data;
    char val;
    struct ref* link;
};

int main()
{
    struct ref object1;
    object1.link = NULL;
    object1.data = 10;
    object1.val = 20;
    struct ref object2;
    object2.link = NULL;
    object2.data = 30;
    object2.val = 40;
    object1.link = &object2;
    printf("%d \n", object1.link -> data);
    printf("%d\n", object1.link -> val);
    return 0;
}
