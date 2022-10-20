#include<stdio.h>
#include <string.h>

int main()
{
    int value;
    char S1[] = "hello";
    char S2[] = "welcome";
    value = strcmp(S1,S2);

    if (value == 0)
    printf("same");
    else
    printf("Not same");

    return(0);
}