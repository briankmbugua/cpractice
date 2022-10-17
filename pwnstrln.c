#include<stdio.h>

int main(void)
{
    int count = 0,i = 0;

    char name[10] = "brian";

    while(name[i] != '\0'){
        count++;
        i++;
    }

    printf("the length of the string is %d", count);

}