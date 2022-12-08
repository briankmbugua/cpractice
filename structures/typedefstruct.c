#include<stdio.h>
#include<string.h>
int main()
{
	struct Student
	{
		char name[20];
		int age;
	};
	struct Student stud;
	strcpy(stud.name, "brian");
	stud.age = 26;
	printf("%d", stud.age);
	printf("\n%s", stud.name);
	//using typedef to shorten the code for creating structs
	struct Person
	{
		char name[20];
		int age;
	};
	typedef struct Person human;//with typedef we create an alias human which we can use to
	                            //create structures of type Person
	human brian;//using the alias created using typedef.
	strcpy(brian.name, "brian");
	brian.age = 26;

	printf("\n%d", brian.age);
	printf("\n%s", brian.name);

	typedef struct programmer
	{
		char name[20];
		int age;
	} me;

	me oscar;

	strcpy(oscar.name,"oscar");
	oscar.age = 7;

	printf("\n%d", oscar.age);
	printf("\n%s", oscar.name);


	

	return 0;

}
