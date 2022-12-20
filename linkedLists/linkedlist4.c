#include<stdio.h>
#include<stdlib.h>

int main() {
    //create and allocate memory for three nodes

    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *middle, *last;

    head = malloc(sizeof(struct node));
    middle = malloc(sizeof(struct node));
    last = malloc(sizeof(struct node));

    //assing values to each node
    head->data = 10;
    middle->data = 20;
    last->data =  30;

    //linking each node
    //headnode->middlenode->lastnode->NULL
    head->next = middle;
    middle->next = last;
    last->next = NULL; //NULL indicates end of a linked list

    //print each node in a linked list
    //ALGORITHM
    /*
    1.create a temporary node(temp) and assing the head node's address.
    2.print the data which is present in the temp node
    3.After printing the data, move the temp pointer to the next node.
    4.Do the above process untill we reach end
    */

   struct node *temp = head;
   while (temp != NULL)
   {
    printf("%d ",temp->data);
    temp = temp->next;
   }
   //Why are we using temp instead of head
   /*
   if we use the head pointer instead of the temp while printing the linked list
   we will miss the track of the starting node(After printing the data head node will point to NULL)
   WE SHOULD NOT CHANGE THE HEAD NODE ADDRESS
   we should always use a temporary node to manipulate the linked list
   */

  return (0);
    
}