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