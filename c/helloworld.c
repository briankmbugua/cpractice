#include<stdio.h>

int main(void){
    int matrix[2][2] = {{1,1},{2,2}},i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return(0);
}