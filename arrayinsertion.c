#include<stdio.h>

int main(){
    int a[10] = {1,2,3,4,5};
    int size = 5;
    int num,i,pos;
    printf("enter the number to insert\n");
    scanf("%d", &num);
    printf("enter the position to insert at\n");
    scanf("%d", &pos);
    for(i = size -1; i>=pos-1;i--){
        a[i+1] = a[i];
    }
    a[pos-1] = num;
    size++;

    for(i = 0; i<=size-1; i++){
        printf("%d ",a[i]);
    }
}