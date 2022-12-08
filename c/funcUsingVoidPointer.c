#include <stdio.h>

void* cube(const  void* num);

int  main() {
    int x, cube_int;
    x = 4;

    cube_int = cube(&x);
    printf("%d cubed is %d\n", x, cube_int);
    return 0;
}