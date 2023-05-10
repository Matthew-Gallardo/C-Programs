#include <stdio.h>
#include <stdlib.h>

int factorial (int);
int main()
{
   int value, solution;
   printf ("Emter a Value:");
   scanf ("%d",&value);

    solution =factorial (value);
    printf ("Answer of %d ! is %d", value, solution);
}
int factorial (int value){

    int solution =1; // 0!
   for (int i =value;  i >0; i--) {
    solution = solution *i;
   }
   return solution;

}



