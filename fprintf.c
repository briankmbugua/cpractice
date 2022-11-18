#include<stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("fprintf_test.txt", "w");
    fprintf(fptr, "learning c with guru99\n");
    fclose(fptr);
    return 0;
}