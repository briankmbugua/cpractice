#include<stdio.h>

int main(){

    int numbers[3] = {1,2,3};
    int *ptr = numbers;
    printf("using pointers to list\n");
    for(int i = 0; i < sizeof(numbers)/sizeof(int); i++){
        printf("%d\n", *ptr);
        ptr++;
    }

    printf("printing using array notation\n");
    for(int i = 0; i < sizeof(numbers)/sizeof(int); i++){
        printf("%d\n",numbers[i]);
    }
}