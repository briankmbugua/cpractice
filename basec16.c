#include <stdio.h>

/**
  * main - prints all the numbers of base 16 in lowercase
  * Return: 0 return value if successful
 */
int main(void)
{
	int n;
	char ch;

	// for (n = 48; n < 58; n++)
	// {
	// 	putchar(n);
	// }
	// for (ch = 'a'; ch <= 'f'; ch++)
	// {
	// 	putchar(ch);
	// }
	// putchar('\n');
    n = 48;
	while(n<58){
		putchar(n);
		n++;
	}
	ch = 'a';
	while(ch<'f'){
		putchar(ch);
		ch++;
	}
	return (0);
}