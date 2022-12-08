#include<stdio.h>
#include<stdarg.h>//contains facilities to create functions with varaible number of arguments

int max(int num_args, ...);//here ... means there is going to be a variable number of arguments

int main(void)
{
    int max_num = max(2, 3, 4);
    printf("max is %d\n", max_num); 
}

int max(int num_args, ...)//int num_args will specify the number of arguments remaining
{
    va_list args; //va_list is the type  and args is the name of the variable
    //this type is provided by stdarg.h it helps us have a variable number of arguments
    //then we call a function to acces the arguments one at a time
    va_start(args, num_args);//you pass va_list variable and the argument preceding the list of
    //arguments ...
    //then you create a loop to acces each argument one by one

    int max;//to hold the max value

    for(int i = 0; i< num_args; i++)
    {
        int x = va_arg(args, int);//this function helps acces the arguments one at a time, you pass
        //the va_list variable and the type; it pulls aout the next argument on the list and returns it
        if(i == 0) max = x;
        else if (x > max) max = x;
        printf("X: %d\n", x);
    }

    va_end(args); //this ends your acces to the list of arguments

    return max;
}