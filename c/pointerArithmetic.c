#include<stdio.h>

int main(void){
    int array[] = {1,2,3,4,5,7,8,9,10},i;
    int* ptr = array;
    int index = sizeof(array)/sizeof(array[0]);
    printf("index of last element in array %d\n",index);
    for(i=0;i<index;i++){
        printf("%d\n", *ptr++);
    }
}