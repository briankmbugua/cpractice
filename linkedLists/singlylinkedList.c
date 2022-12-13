#include<stdio.h>
#include<stdlib.h>

int main(){
    //create a structure with one data pointer and a next pointer,
    //which will be pointing to the next node of the list
    //initialize the start pointer to NULL

    //declaring a linked list

    struct LinkedList{
        int data;
        struct LinkedList *next; //next is a pointer to store the adress of the next node
    };

    typedef struct LinkedList *node; //define node as pointer of data type struct LinkedList

node createNode(){
    node temp; // declare a node
    temp = (node)malloc(sizeof(struct LinkedList)); // allocate memory using malloc()
    temp->next = NULL;// make next point to NULL
    return temp;//return the new node
};

node addNode(node head, int value){
    node temp,p;// declare two nodes temp and p
    temp = createNode();//createNode will return a new node with data = value and next pointing to NULL.
    temp->data = value; // add element's value to data part of node
    if(head == NULL){
        head = temp;     //when linked list is empty
    }
    else{
        p  = head;//assign head to p 
        while(p->next != NULL){
            p = p->next;//traverse the list until p is the last node.The last node always points to NULL.
        }
        p->next = temp;//Point the previous last node to the new node created.
    }
    return head;
}
}