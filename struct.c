#include<stdio.h>
#include<string.h>


struct Student
{
    char name[50];
    char id[10];//these are members of struct student
    int age;
    int grades[5];
};

int main(void){
    struct Student kevin;

    strcpy(kevin.name, "Kevin");
    strcpy(kevin.id,"000123123");
     kevin.age = 40;
     kevin.grades[0] = 1;
     kevin.grades[1] = 2;
     kevin.grades[2] = 2;
     kevin.grades[3] = 3;
     kevin.grades[4] = 5;

     printf("Age: %d\n", kevin.age);
     printf("NAME: %s\n", kevin.name);
     printf("ID: %s\n", kevin.id);
     printf("Grades:\n");
     for(int i = 0;i<5;i++)
        printf("grade[%d]: %d\n", i, kevin.grades[i]);
}