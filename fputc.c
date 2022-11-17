#include<stdio.h>
int main(){
    int i;
    FILE *fptr;
    char fn[50];
    char str[] = "AM BRIAN\n";
    fptr = fopen("fputc_test.txt","w");
    for(i=0;str[i] != '\n'; i++){
        fputc(str[i], fptr);
    }

    fclose(fptr);
    return (0);
}