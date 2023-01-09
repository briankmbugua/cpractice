#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void addLast(struct node **head, int val)
{
    //create a new node of type struct node
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;//since you want to insert at the end this node will be the last node
                         //and the last node next pointer points to NULL
    // If head is NULL, it's an empty list CHECK IF LIST IS EMPTY
    if(*head == NULL) {
        *head = newNode;
        //otherwise, find the last node and add the newNode
    } else {
        struct node *lastNode = *head;
        //last node's address will be NULL
        while(lastNode->next != NULL){
            lastNode = lastNode->next;
        }

        //add the new node at the end of the linked list
        lastNode->next = newNode;
    }                  
}

void printList(struct node *head)
{
    struct node *temp = head;

    //iterate the entire linked list and print the data

    while(temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    struct node *head = NULL;

    addLast(&head, 10);
    addLast(&head, 20);
    addLast(&head, 50);
    printList(head);

    return (0);
}