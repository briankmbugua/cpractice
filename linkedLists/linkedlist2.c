#include <stdio.h>
#include <stdlib.h>//in here we have the malloc function

struct node
{
    int data;
    struct node *link;
};

void count_of_node(struct node *head);

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

    //this is the first method of inserting the third node
    //but it is wastefull since you'll have to create as many pointers as the nodes
    // struct node *third = malloc(sizeof(struct node));
    // third->data = 99;
    // third->link = NULL;//since there is no fourth node
    // //modify current link part to point to third node
    // current->link = third;
    // printf("\ndata part from the third node %d",third->data);
    //METHOD TWO
    //With the help of the head pointer we can acces the whole list  
    //therefore we can reuse the current pointer to create a third node
    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;//updating the link part of the second node to point
    //to the third node

    count_of_node(head);
    return 0;
} 


    //COUNTING NODES
    void count_of_node(struct node *head){
        int count = 0;
        if(head == NULL)
        printf("linked list is empty");

        struct node *ptr = NULL;
        ptr = head;
        while(ptr != NULL) {
            count++;
            ptr = ptr->link;
        }
        printf("\n%d", count);
    }
