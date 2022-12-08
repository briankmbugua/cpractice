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
    strcpy(p->name, "changedFromKim");
    strcpy(p->id, "1234byvalue");
    printf("name = %s\n id = %s\n age = %d\n", p->name, p->id, p->age);
    printf("after modification by pass by refrence");
}


void main(void){
    struct student kim;
    passByValue(kim);
    passByReference(&kim);
    printf("\n%s", kim.name);
    printf("\n");
    passByValue(kim);
}