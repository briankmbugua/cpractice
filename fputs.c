#include<stdio.h>
int main() {
    FILE *  fp;
    fp = fopen("fputs_test.txt","w+");
    fputs("This is guru99 tutorial on fputs,", fp);
    fputs("we dont nedd to use for loop\n", fp);
    fputs("Easier than fputc function\n", fp);
    fclose(fp);
    return (0);
}