#include<stdio.h>
#include<string.h>

int main(void)
{
    char name[30];
    printf("Enter name");
    fgets(name);
    int count = strlen(name);
    printf("%d", count);
    return(0);
}