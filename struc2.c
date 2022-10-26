#include<stdio.h>
#include<string.h>

struct student
{
    char name[50];
    char id[10];//these are members of struct student
    int age;
};

int main(){
    struct student brian;
    brian.age = 10;
    strcpy(brian.name, "brian");
    strcpy(brian.id, "33451818");

    printf("name = %s\n id = %s\n age = %d\n", brian.name, brian.id, brian.age);
}