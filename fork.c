#include<stdio.h>
#include<unistd.h>

int main(int argc, char* argv[])
{
    fork();
    printf("hello world\n");
    return 0;
}
