//check whether a given value is present or not in the linkedlist
//Algorithm
/*
1.iterate the linked list using a loop
2.if any given node has the key value, return 1
3.if the program execution comes out of the loop(the given key is not present in
the linked list), return -1

PSEUDOCODE
1.ITERATE THE LINKED LIST USING A LOOP
int searchNode(struct node *head, int key)
{
    struct node *temp = head;

    while(temp != NULL)
    {
        if(temp->data == key) //return 1 on search found
           return 1;
        temp = temp->next;
    }

    return -1; Return -1 on search not found
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
    //create a new node
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next     = NULL;

    //if head is NULL, it is an empty list
    if(*head == NULL)
         *head = newNode;
    //Otherwise, find the last node and add the newNode
    else
    {
        struct node *lastNode = *head;

        //last node's next address will be NULL.
        while(lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }

        //add the newNode at the end of the linked list
        lastNode->next = newNode;
    }

}

int searchNode(struct node *head,int key)
{
    struct node *temp = head;

    //iterate the entire linked list and print the data
    while(temp != NULL)
    {
         //key found return 1.
         if(temp->data == key)
             return 1;
         temp = temp->next;
    }
    //key not found
    return -1;
}

int main()
{
    struct node *head = NULL;

        addLast(&head, 10);
        addLast(&head, 200);
        addLast(&head, 30);

        if(searchNode(head, 200) == 1)
            printf("Search Found\n");
        else
            printf("Search not found\n");

        return 0;        
}