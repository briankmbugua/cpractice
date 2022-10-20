#include<stdio.h>
char display(char* str);
void main(void) {
    char name[20] = "brian";
    display(name);
}

char display(char* str){
    printf("%s\n",str);
}