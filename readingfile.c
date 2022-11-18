#include<stdio.h>
int main(){
    FILE * file_pointer;

    char buffer[50], c;

    file_pointer = fopen("fprintf_test.txt", "r");
    printf("---- read a line----\n");
    fgets(buffer, 50, file_pointer);
    printf("%s\n", buffer);



    printf("---- read and parse data----\n");
    file_pointer = fopen("fprintf_test.txt", "r"); // reset the pointer
    char str1[10], str2[10], str3[10], str4[10];
    fscanf(file_pointer, "%s %s %s %s", str1, str2, str3, str4);
    printf("Read string1 |%s|\n", str1);
    printf("Read string2 |%s|\n", str2);
    printf("Read string3 |%s|\n", str3);
    printf("Read string4 |%s|\n", str4);

    printf("----read the entire file----\n");

    file_pointer = fopen("fprintf_test.txt", "r"); // rest the pointer

    while((c = getc(file_pointer)) != EOF) printf("%c", c);
    fclose(file_pointer);
    return 0;

}