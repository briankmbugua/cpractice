#include<stdio.h>

void main(){
    int a[] = {10,11,-1,56,67,5,4};
    int *p,*q;
    p=a;
    printf("%d\n", *p);
    printf("%d %d %d\n",(*p)++,*p++,*++p);
}