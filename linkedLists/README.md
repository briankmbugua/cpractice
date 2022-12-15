# NODE REPRESENTATION IN C
we can use structures to combine two different data types into a single type
with our own name

```C
struct node {
    int data;
    struct node *link; //this is a pointer to another node 
    //a node is just a self referntial structure
}
```
# IN GENERAL

```C
struct node {
    data_type member1;
    data_type member2;
           .            
           .
           .
           .
    sturct node *link;       
```
# linkedlist

use malloc to create a head node which you can use to acess all list items in singly linked list
```c
struct node *head = malloc(sizeof(struct node))
```
# traversing a single inked list
traversing a single linked list means visiting each node of a single linked list untill the end node is reached