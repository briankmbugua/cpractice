#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[])
{
    printf("hello befor fork\n");
    int id = fork();
    printf("after fork\n");
    if(id == 0){
        printf("hello from child process\n");
    } else {
        printf("hello from the main process\n");
    }
    return 0;
}
