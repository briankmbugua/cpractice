#include<stdio.h>
/*
(type-name) expression
type name is the standard 'c' language data type
an expression can be a constant, variable, or an actual expression
*/
int main(){
    float a = 1.2;
    //int b = a'//compiler will throw an error
    int b = (int)a + 1;
    printf("Value of a is %f\n", a);
    printf("Value of b is %d\n",b); 
}