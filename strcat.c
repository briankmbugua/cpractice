#include <stdio.h>
#include <string.h>

// int main(void)
// {
//     char firstName[20] = "brian";
//     char secondName[10] = "mbugua";

//     strncat(firstName,secondName);

//     printf("%s", firstName);

//     return(0);
// }
int main()
{
    char src[50] = "This is source";
    char dest[50] = "This is destination";

    char fullName[1] = "brian";
    char secondName[10] = "mbugua";

    strncat(dest, src, 15);
    strncat(fullName, secondName, 6);

    printf("Final destination string : |%s|", dest);

    printf("\nFull name is : |%s|", fullName);

    return (0);
}