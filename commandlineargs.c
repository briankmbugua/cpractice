#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){
    if(argc != 3){
        printf("Two args required\n");
        exit(-1);
    }
    int lower = atoi(argv[1]);
    int higher = atoi(argv[2]);

    for(int i = lower; i<=higher; i++){
        printf("%d\n", i);
    }
    // int i;
    // printf("The number of arguments are: %d\n",argc);
    // for(i=0;i< argc;i++){
    //     printf("%s\n",argv[i]);
    // }

    return(0);
}