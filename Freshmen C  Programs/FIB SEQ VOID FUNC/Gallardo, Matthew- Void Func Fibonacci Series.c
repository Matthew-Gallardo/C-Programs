/* MATTHEW GALLARDO BSCS 1-4 SIMPLE PROGRAM FIB SEQ */

#include <stdio.h>

void fibser(int);
int main()
{
    int N;

        // getting input from the user on how many terms
        printf ("How many number of terms in series? ");
        scanf ("%d",&N);
        // The Output , printing the first and second term
        printf("Fibonacci Series in %d Terms: ", N);
// calling of function
        fibser(N);
}

 void fibser(int N) {
    int nt, t1=0,t2=1; // i starts at 2 because the 0 and 1

 // using for loops to get the desired number of terms
    for (int i =0;i<N; i++) {
        printf ("%d, ", t1);
        //solution
        nt=t1+t2; //next term
        t1=t2;
        t2=nt;
    }

}
