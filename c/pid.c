#include<stdio.h>
#include<unistd.h>

int main(void)
{
    int a = 3;
    int b = 3;
    int sum = a+b;

    pid_t pid; //pid_t is a type to hold the pid
    pid_t ppid;//to hold parent process id
    pid_t pgrid;//to hold process group id
    pid_t sid;//to hold session id
    pid = getpid();//returns process id it is stored in pid
    ppid = getppid();//returns the parent process id
    pgrid = getpgrp();//returns process group id
    sid = getsid(2);//return process session id
    printf("sum is %d\n", sum);
    printf("pid is %d\n", pid);
    printf("ppid is %d\n",ppid);
    printf("process group id is %d\n", pgrid);
    printf("session id is %d\n", sid);
    return 0;
}