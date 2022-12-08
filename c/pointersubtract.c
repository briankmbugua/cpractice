#include<stdio.h>

void main(void){
    int a[] = {2,4,5,5,6};
    int* p=a;
    int* q=&a[3];
    printf("q-p = %ld\n",q-p);
    printf("p-q = %ld\n",p-q);
    printf("value = %d\n", *q);
    q=q-2;
    printf("Value = %d", *q);
}