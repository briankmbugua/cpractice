#include<stdio.h>
#include<string.h>

int main(void)
{
    char firstName[10] = "brian";
    char secondName[10] = "mbugua";

    strcat(firstName,secondName);

    printf("%s", firstName);

    return(0);
}