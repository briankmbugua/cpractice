#include<stdio.h>
#include<string.h>


struct student
{
    char name[50];
    char id[10];//these are members of struct student
    int age;
};

void passByValue(struct student kim){
    kim.age = 10;
    strcpy(kim.name, "kim");
    strcpy(kim.id, "1234567");
    printf("name = %s\n id = %s\n age = %d\n", kim.name, kim.id, kim.age);
}

void passByReference(struct student *p){
    p->age = 14;
    strcpy(p->name, "byvalue");
    strcpy(p->id, "1234byvalue");
    printf("name = %s\n id = %s\n age = %d\n", p->name, p->id, p->age);
    printf("pass by refrence");
}


int main(){
    struct student kim;
    passByValue(kim);
    passByReference(&kim);
    // //the members of struct brian has not been changed by the function
    // printf("the members of struct brian has not been changed by the function\n");
    // struct student brian;
    // brian.age = 10;
    // strcpy(brian.name, "brian");
    // strcpy(brian.id, "33451818");

    // printf("name = %s\n id = %s\n age = %d\n", brian.name, brian.id, brian.age);
    // passByReference(&kim);
    // printf("name = %s\n id = %s\n age = %d\n", brian.name, brian.id, brian.age);
}


