#include<stdio.h>
/*
A self-referntail structure is a structure that can have members of the same type
SYNTAX
struct structure_name
{
    datatype datatype_name;
    structure_name * pointer_name;
}
*/
struct node
{
    int data;
};

struct node nodeOne;//nodeOne is a structure

struct node *ptr;//declaring a pointer to the node structure
ptr = &nodeOne;//now ptr points to the structure varaible nodeOne

//accessing members using pointers
//using indirection pointer (*) and (.) operator
//usng arrow(->)operator or membership operator



