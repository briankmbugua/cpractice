#include<stdio.h>
int sum(int a,int b);
//a function pointer contains address of the code
void main()
{
    int s = 0;

    //return type of the function pointer depends on the prototype of the function return type should be same
    int (*ptr)(int, int) = &sum; //pointer to function
    //you can also not use the address of operator in sum as = sum since the name of the functiom
    //contains base address of the function
    s = (*ptr)(2,3);
    //here you can also  ot use the asteric as s = ptr(2,3);

    printf("%d", s);
}

int sum(int a, int b)
{
    return a+b;
}