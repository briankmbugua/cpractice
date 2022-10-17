#include<stdio.h>

int main(void)
{
    char s1[4];
    printf("enter a string\n");
    scanf("%s", s1);// we are not using adress operator co s1 is the base address of the character array
    //the s mode specifier allows us to enter string without using loop
    //scanf dosen't consider space
    //scanf has buffer overflow problem
    //scanf("%4s",s1); means it will only read four characters
    printf("%s",s1);
    return(0);
}