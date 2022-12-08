#include<stdio.h>
#include<string.h>
int main(void)
{
    char S1[20] = "brian";
    char S2[7] = "mbugua";
    int len1,len2,i;
    len1 = strlen(S1);
    len2 = strlen(S2);
    for(i=0;i<=len2;i++){
        S1[len1 + i] = S2[i];
    }

    printf("%s\n", S1);
    return(0);
}