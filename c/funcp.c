//return_type(*function_name)(arguments)

#include<stdio.h>
void Hi_function(int times); /*function*/

int main() {
    void(*function_ptr)(int);/*function pointer declaration*/
    function_ptr = Hi_function; /*pointer assignment*/
    function_ptr(3);/*function call*/
    return (0);
}

void Hi_function(int times){
    int k;
    for(k = 0; k <times; k++)
    printf("Hi\n");
}

