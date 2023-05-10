#include <stdio.h>
#include <stdlib.h>

void factorial (int);
int main()
{
   int value, solution;
   printf ("Emter a Value:");
   scanf ("%d",&value);

    factorial (value);
}
void factorial (int value){

    int solution =1; // 0!
   for (int i =value;  i >0; i--) {
    solution = solution *i;
   }
  printf ("Answer of %d ! is %d", value, solution);
}

