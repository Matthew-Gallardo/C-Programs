#include <stdio.h>
#include <stdlib.h>
// Pointer is a reference to another variable(memory location ) in a program

int main()
{
    /*
   int V =101;
   int *P= &V;
   int  *Q;
   int *R;

   Q= &V;
   R=P;//NOT THE SANE


    printf ("V contains %d\n", V);
    printf ("*P contains %d\n", *P);
    printf ("P contains %p\n",P);

       printf ("Q contains %d\n", Q);
       printf ("R contains %x\n", R);

       */


      int A, B ,C;
      int *P , *Q;

      Q=&C;
      A=100;
      B=75;

      P=&A;

      *Q=B;


     //   printf ("*P contains %d\n", *P);
        printf ("*Q contains %d\n", *Q);
        printf ("*P contains %d\n", *P);

     A=500;
     *P=300;
        printf ("*Q contains %d\n", *Q);
        printf ("*P contains %d\n", *P);




}
