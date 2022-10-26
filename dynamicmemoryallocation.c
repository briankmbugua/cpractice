#include <stdio.h>
#include<stdlib.h>

int main(void)
{
    printf("Enter size");
    int size = 0;
    scanf("%d", &size);
    int *a = malloc(sizeof(int)*size); //we can treat this like an array

    for(int i=0;i<size;i++) a[i] = size - i;
    for(int i=0;i<size;i++)
    printf("a[%d] = %d\n", i, a[i]);
    printf("\n");
    printf("a: %p\n", a);
    a = realloc(a, sizeof(int) * (size+5));
    for(int i=size;i<(size+5);i++) a[i] = 9;
    for(int i=0;i<(size+5);i++)
    printf("a[%d] = %d\n", i, a[i]);
    printf("\n");
    free(a);

}