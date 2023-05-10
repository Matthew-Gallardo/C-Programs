#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
   int *P;
   P= alloca(sizeof (int));
   *P=20;

    printf ("P is found in %p\n", P);
     printf ("P is contains %d\n", *P)



}
