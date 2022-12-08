#include<stdio.h>
#include<string.h>
char* display();
void main(){
    char *str = display();
    //str[0] = 'z';//can only be modified here when using static keyword in the function initialization
    printf("string is %s", str);
}

char* display()
{
    // static char name[20] = "jenny";//can ony work with the static keyword
    char* str = "jenny";//works when you use pointer to string you cannot modify this string
    //in main since it's a string literal which is stored in a read only memory, it's safe to use
    //const so as to tell anyone in the future that it is not modifiable
    return str;
}