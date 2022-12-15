#include<stdio.h>
#include<stdlib.h>

int main(){
    //create a node which is just a self referncing structure
    struct node
    {
        int data;
        struct node *link;
    };

    struct node *head = malloc(sizeof(struct node));

    head->data = 40;
    head->link = NULL;
    printf("head node data part %d", head->data);

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;
    printf("\nsecond node data part %d", current->data);

    current = malloc(sizeof(struct node));
    current->data = 30;
    current->link = NULL;
    head->link->link = current;//head->link means pointing to the second node, therefore head->link->link means the third node
    printf("\nthird node data part %d", current->data);

    current = malloc(sizeof(struct node));
    current->data = 50;
    current->link = NULL;
    head->link->link->link = current;
    printf("\nfourth node data part %d", current->data);

    return 0;
    
}
