//ALGORITHM
/*
1.if the head node has the given key,
make the head node point to the second node and free its memory.
2.otherwise
from the current node, check whether the next node has the given key,
if yes, make the current->next = current->next->next and free the memory.
else, update the current node to the next node and do the obove process(from step 2) till the last node
PSEUDOCODE
1.Head node has the given key

void deleteNode(struct node **head, int key)
{
    temp is used to free the memory
    struct node *temp;

    KEY FOUND ON THE HEAD
    move head to the next and free head
    if(*head->data == key)
    {
        temp = *head; backup the head to free it's memory
        *head = (*head)->next; point head to the next node
        free(temp)
    }
    FOR OTHER NODES(none head nodes)
     else {
        struct node *current = *head;
        while(current->next != NULL)
        {    if yes we need to delete the current->next node
            if(current->next->data == key) {
                temp = current->next;
                node will be disconnected from the linkedList
                current->next = current->next->next;
                free(temp);
                break;
            }
            move the current node and proceed
            else{
                current = current->next;
            }
        }
    }
}

*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void addLast(struct node **head, int val)
{
    //create new node
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;

    //if head is null it's an empty list
    if(*head == NULL){
        *head = newNode;
    }//otherwise, find the last node and add the newNode
    else {
        struct node *lastNode = *head;//this is a temp node
        //last node next address will be NULL
        while(lastNode->next != NULL){
            lastNode = lastNode->next;
        }

        //add the newNode at the end of the linked list
        lastNode->next = newNode;
    }
}

void deleteNode(struct node **head, int key)
{
    //temp is used to freeing the memory

    struct node *temp;
    //key found on the head node
    //move the head node to the next and free the memory
    if((*head)->data == key) {
        temp = *head; //backup to free the memory
        *head = (*head)->next;
        free(temp);
    }
    else{
        struct node *current = *head;
        while(current->next != NULL)//Iterating over the whole list
        {
            //if yes, we need to delete the current->next node
            if(current->next->data == key){
                temp = current->next;//moving the temp pointer to point to the next node
                //node will be disconnected from the linked list
                current->next = current->next->next;
                free(temp);
                break;
            }
            //otherwise, move the current node and proceed
            else{
                current = current->next;
            }
        }
    }
}

void printList(struct node *head)
{
    struct node *temp = head;
    //iterate the entire linked list and print the data
    
}

