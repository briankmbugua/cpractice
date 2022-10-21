#include<stdio.h>

int main(void){
    int array[] = {1,2,3,4,5,7,9,0,11},i;
    int* ptr = &array[0];
    int size = sizeof(array)/sizeof(array[0]);
    printf("no of elements in array %d\n",size);
    for(i=0;i<size-1;i++){
        ptr++;
        printf("%d\n", *ptr);
    }
}