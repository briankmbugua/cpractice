#include<stdio.h>
#include <string.h>
int main(void)
{
    char s1[10];
    printf("enter a string\n");
    gets(s1);//has buffer overflow problem use fgets() function
    printf("%s",s1);
    return(0);
}