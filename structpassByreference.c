#include <stdio.h>

#include <string.h>

struct patient

{

   int ID;

   char name[10];

   char gender;

};

void passByReference(struct patient *p)

{

   p->ID = 102; // this modification reflects P1's id.

   // print the details.

   printf(" The patient's ID is: %d \n", p->ID);

   printf(" The patient's name is: %s \n", p->name);

   printf(" The patient's gender is: %c \n", p->gender);

}

int main()

{

   struct patient P1;

   P1.ID = 101;

   strcpy(P1.name, "ABC");

   P1.gender = 'M';

   passByReference(&P1); // pass structure variable by reference.

   // P1's ID gets affected by the function's modification.

   printf("\n The original value of ID is: %d\n\n", P1.ID);

   return 0;

}