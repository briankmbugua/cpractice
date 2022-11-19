#include<stdio.h>
/*
the bitwise shift operators are used to ,ove/shift the bit patterns 
either to the left or to the right

Operand << n (Left Shift)
Operand >> n (Right Shift)

Here an opernad is an interger expression on which we have to perform the shift
operation
"n" is the total  number of bit positions that we have to shift the interger expression
x << 2 (left shift) = 1111<<2 = 1100
x>>2 (right shift) = 1111>>2 = 0011
*/
int main(){
    int a = 20; // 20 = 010100
    int c = 0;

    c = a << 2; // 80 = 101000

    printf("Left shift value - value of c is %d\n", c);

    c = a >> 2; //05 = 000101

    printf("Right shift - value of c is %d\n", c);
}


