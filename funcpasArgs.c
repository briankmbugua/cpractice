#include<stdio.h>
#include<stdlib.h>

int compare(const void *, const void *);

int main(){
    int arr[5] = {52, 14, 50, 48, 13};
    int num, width, i;
    num = sizeof(arr)/sizeof(arr[0]);
    width = sizeof(arr[0]);
    printf("%d\n", num);
    printf("%d\n", width);
}