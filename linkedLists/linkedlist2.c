#include <stdio.h>
#include <stdlib.h>//in here we have the malloc function

struct node
{
    int data;
    struct node *link;
};

int main() {
    //struct node *head = NULL; //a pointer of type node
                             //intialized to NULL
                             //pointer to the first node of
                             //the linked list
    //head = (struct node *)malloc(sizeof(struct node));
    struct node * head = malloc(sizeof(struct node));//this syntax is the same as the above
    //since malloc returns  a pointer we use it to create
    //the node by allocating enough memory for it
    //here the memory has been allocated for the data as
    //well as the link part
    //it is not necessary to typecast the void pointer returned
    //malloc
    //head is the only way to access the struct created by malloc
    head->data = 45;
    head->link = NULL; // initially it contains NULL since there is no other node
    printf("data part from the first node %d\n", head->data);

    //CREATING THE SECOND NODE
    //we have to again call the malloc function to create another pointer to the second
    //node in the lsit
    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;//since there is no third node
    //next step is to modify the link part of the first node to point to current
    head->link = current;
    printf("data part from the second node %d",current->data);

    struct node *third = malloc(sizeof(struct node));
    third->data = 99;
    third->link = NULL;//since there is no fourth node
    //modify current link part to point to third node
    current->link = third;
    printf("\ndata part from the third node %d",third->data);
    return 0;
} 
