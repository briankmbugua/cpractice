#include<stdio.h>
#include<stdlib.h>

int main(){
//create a self referential structure
struct node {
    int data;
    struct node *next;
};

struct node *head, *first, *second, *third;
head = malloc(sizeof(struct node));
first = malloc(sizeof(struct node));
second = malloc(sizeof(struct node));
third = malloc(sizeof(struct node));
head->data = 0;
first->data = 10;
second->data = 20;
third->data = 40;

//linking
head->next = first;
first->next = second;
second->next = third;
third->next = NULL;

//printing
struct node *temp;
temp = head;
while(temp != NULL){
    printf("%d\n", temp->data);
    temp = temp->next;
}
    return 0;
}