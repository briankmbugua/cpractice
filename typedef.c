#include<stdio.h>
#include<string.h>


typedef struct
{
    char name[50];
    char id[10];//these are members of struct student
    int age;
    int grades[5];
} Student ;

typedef struct
{
    int x;
    int y;
} Point;

void print_student(Student student);
void print_points(Point points[]);

int main(void){
    Student kevin;

    strcpy(kevin.name, "Kevin");
    strcpy(kevin.id,"000123123");
     kevin.age = 40;
     kevin.grades[0] = 1;
     kevin.grades[1] = 2;
     kevin.grades[2] = 2;
     kevin.grades[3] = 3;
     kevin.grades[4] = 5;
     print_student(kevin);

     Point p1 = {5,10};
     Point p2 = {.x=2,.y=8};

     p1 = p2;//you can use assingments with struct it does memory copy

     printf("p1.x: %d\n",p1.x);
     printf("p1.y: %d\n",p1.y); 
     printf("p2.x: %d\n",p2.x);
     printf("p2.y: %d\n",p2.y); 


     Point points[10];

     for(int i = 0; i < 10; i++)
     {
        points[i].x = i;
        points[i].y = 10-i;
     }

     print_points(points);

     return 0;
}

void print_student(Student  student)
{

     printf("Age: %d\n", student.age);
     printf("NAME: %s\n", student.name);
     printf("ID: %s\n", student.id);
     printf("Grades:\n");
     for(int i = 0;i<5;i++)
        printf("grade[%d]: %d\n", i, student.grades[i]);
}


void print_points(Point points[])
{
    for(int i = 0; i< 10; i++)
    printf("p%d = (%d, %d)\n", i, points[i].x,
                                  points[i].y);
}