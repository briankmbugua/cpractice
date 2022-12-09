#include<stdio.h>
/*
A self-referntail structure is a structure that can have members of the same type
SYNTAX
struct structure_name
{
    datatype datatype_name;
    structure_name * pointer_name;
}
*/

struct dog
{
    int age;
};

int main(){

struct dog my_dog = {5};//creating a structure my_dog from type dog

struct dog *ptr_dog;//declaring a pointer to the dog structure
ptr_dog = &my_dog;//now ptr_dog points to the structure varaible my_dog

//accessing members using pointers
//using indirection pointer (*) and (.) operator
(*ptr_dog).age = 10;
//usng arrow(->)operator or membership operator
ptr_dog->age = 20;
(*ptr_dog).age = 10;
printf("%d\n", ptr_dog->age);
}




