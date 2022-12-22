/*
lets say you have a pointer, its value is an address
but now you want to change that address
you could, by doing pointer1 = pointer2, you give pointer one the
address of pointer2
but of you do that within a function, and you want the result to 
persist after the function is done, you need to do some extra work.
you need a new pointer3 just to point to pointer1.pass pointer3
to the function
EXAMPLE
*/
#include <stdio.h>
void cant_change(int * x, int * z);
int main()
{

    int c = 1;
    int d = 2;
    int e = 3;
    int * a = &c;
    int * b = &d;
    int * f = &e;
    int ** pp = &a;
    printf("\n a's value: %p \n", a);
    printf("\n b's value: %p \n", b);
    printf("\n f's value: %p \n", f);
    printf("\n can we change a?, lets see \n");
    printf("\n a = b \n");
    a = b;
    printf("\n a's value: %p, same as 'b'... it seems we can, but can we do it in a function? lets see... \n", a);
    printf("\n cant_change(a, f); \n");
    cant_change(a, f);
    printf("\n a's value is now: %p, Doh! same as 'b'...  that function tricked us. \n", a);
    return 0;
}

void cant_change(int * x, int * z){
    x = z;
    printf("\n ----> value of 'a' is: %p inside function, same as 'f', BUT will it be the same outside of this function? lets see\n", x);
}