/* MATTHEW GALLARDO BSCS 1-4 SIMPLE PROGRAM FIB SEQ */

#include <stdio.h>


int main()
{
    int N, t1 , t2;
    t1 =0; //  starts at zero followed by 1
    t2= 1;
    int nt= t1 +t2; //next term
        printf ("Fibonacci Series in Simple Program \n");
        // getting input from the user on how many terms
        printf ("How many number of terms in series? ");
        scanf ("%d",&N);
        // result
        printf("Fibonacci Series in %d Terms: ", N );
    // using for loops to get the desired number of terms
   for (int i =0;i<N; i++) {
        printf ("%d, ", t1);
        //solution
        nt=t1+t2; //next term
        t1=t2;
        t2=nt;
    }
    return 0;
}
