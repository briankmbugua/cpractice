/*the typedef keyword is used in C programming to provide some meaningful names to already existing variable in the C program
 SYNTAX OF TYPEDEF
 typedef<existing_name><alias_name>*/
#include<stdio.h>
int main()
{
	typedef unsigned int unit;
	//we have declared the unit variable of unsigned int by using
	//typedef keyword
	unit i, j;//instead of writting unsigned int a,b
	i=10;
	j=20;
	printf("value of i is:%d",i);
	printf("\nvalue of is:%d",j);
	return 0;
}
