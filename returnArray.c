#include <stdio.h>

int *build_array();

int main() {
    int *a, k;
    a = build_array();

    for(k = 0; k < 5; k++){
        printf("%d\n", a[k]);
    }

    return 0;
}

//the scope of a static variable or function is throught the program

int * build_array() {
    static int Tab[5] = {1,2,3,4,5};
    return (Tab);
}