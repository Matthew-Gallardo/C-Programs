/* MATTHEW GALLARDO BSCS 1-4 VOID FUNCTION FIB SEQ */

#include <stdio.h>

void fibser(int);
int main()
{
    int N;
    	printf ("Fibonacci Series using Void Function \n");

        // getting input from the user on how many terms
        printf ("How many number of terms in series? ");
        scanf ("%d",&N);
        // The Output , printing the first and second term
        printf("Fibonacci Series in %d Terms: ", N);
// calling of function
        fibser(N);
}

 void fibser(int N) {
    int nt, t1=0,t2=1; //giving first and second term a value

 // using for loops to get the desired number of terms
    for (int i =0;i<N; i++) {
        printf ("%d, ", t1);
        //solution
        nt=t1+t2; //next term
        t1=t2;
        t2=nt;
    }

}
