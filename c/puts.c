#include<stdio.h>

int main()
{
    char name[5] = "brian";
    puts(name);//will automatically add new line operator at the end
    printf("%s", &name[2]);
    return(0);
}