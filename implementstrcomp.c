#include<stdio.h>
#include<string.h>

int main(void)
{
    char S1[] = "hello";
    char S2[] = "hello";

    int i;
    int flag;

    for(i=0;S1[i] !='\0' || S2[i] != '\0';i++){
        if(S1[i] != S2[i]){
            flag = 1;
            break;
        }
    }

        if(flag == 1)
        printf("not same");
        else
        printf("same");
}