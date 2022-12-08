#include<stdio.h>

void modify(char*,char*);

void main(){
    char str1[20] = "brian";
    char str2[20] = "mbugua";
    modify(str1,str2);
}

void modify(char str1[],char str2[])
{
    int i,l=0;
    for(i=0;str1[i]!='\0';i++){
        l = l+1;
    }
    str2[1] = 'k';

    printf("Length of the str1 is %d\n",l);
    printf("both the strings are %s %s", str1,str2);
}