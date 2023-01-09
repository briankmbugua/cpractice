#include<stdlib.h>
#include<stdio.h>


int main() {

    //The new node will be added at the end of the linked list.
    //!ALGORITHM
    /*
    1. Declare a head pointer and make it as NULL
    2. Create a new node with the given data.And make the new node=> next
    as NULL(because the new node is going to be the last node)
    3. if the head node is NULL(Empty linke list)
    make the new node as the head.
    4.If the head node is not NULL,(linked list already has some elements
    find the last node.
    make the last node=>next as the new node
    */

   //? 1. DECLARE A HEAD POINTER AND MAKE IT AS NULL
   struct node {
    int data;
    struct node *next;
   };//!declared a head pointer

   struct node *head = NULL;//!and make it as NULL

   //? 2. CREATE A NEW NODE

   void addLast(struct node **head, int val)
   {
    //!CREATE A NEW NODE
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    //? 3.if head is NULL it is an empty list
    if(*head == NULL){
        *head = newNode;
    }
    //? 4.Otherwise, find the last node and set last node = newNode or add the newNode
    // the last node of a linked list has the reference pointer as NULL i.e
    //node=>next = NULL
    //PSEUDECODE
    /*
    while(node->next ! NULL)
    {
        node = node->next;
    }
    */
    else {
        struct node *lastNode = *head;//like a temp pointer that will be used for iteration
        //codition inside the while loop

        //last node's next address will be NULL

        while(lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }
        //when the loop finishes and finds the last node where lastNode->next is NULL
        //make the next pointer which is NULL now point to newNode
        //add the new node at the end of the linked list
        lastNode->next = newNode;
    }
   };

    return (0);
}