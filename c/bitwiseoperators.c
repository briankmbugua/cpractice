#include<stdio.h>
/*
& bitwise AND operator
| Bitwise OR operator
^ Bitwise exclusove OR operator
~ Binary One's complement operator
<< left shift operator
>> right shift operator
*/
int main() {
    int a = 20; // 20 = 010100
    int b = 21; // 21 = 010101
    int c = 0;
    c = a & b;

    printf("AND - value c is %d\n", c);

    c = a | b;

    printf("AND - value c is %d\n", c);

    c = a ^ b;

    printf("AND - value c is %d\n", c);

    //getch();
}