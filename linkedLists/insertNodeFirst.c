#include <stdio.h>
#include <stdlib.h>
/*
INSERT NODE AT THE BEGINNING OF A LINKED LIST
ALGORITHM
1.Declare a head pointer and make it as NULL
2.Create a new node with the given data
3.Make the new node point to the head node.
4.Finally, make the new node as the head node
*/

struct node
{
    int data;
    struct node *next;
};
void addFirst(struct node **head, int val)
{
    // create new node
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    // make the new node point to the head node

    newNode->next = *head;
    *head = newNode;
}

void printList(struct node *head)
{
    struct node *temp = head;

    // iterate the entire linked list and print the data
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    // DECLARE A HEAD POINTER AND MAKE IT NULL
    struct node *head = NULL;
    addFirst(&head, 10);
    addFirst(&head, 20);
    addFirst(&head, 30);
    addFirst(&head, 50);
    // create a new node with the given data.

    printList(head);

    return 0;
}
