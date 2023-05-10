/*MATTHEW GALLARDO  BSCS 1-4   Fibonacci Series Recursion */
#include <stdio.h>

// function declaration
int FibonacciS(int);

int main()
{
    int N, i=0; // N= number if terms and initialization of i=0
    //getting input from the user
    printf ("Fibonacci Series in Recursion\n");
    printf ("How many number of terms in series? ");
    scanf ("%d,",&N);

    // output of the result
    printf ("Fibonacci Series in %d terms: ", N);
// using for loops

    for (int ctr =1; ctr <=N; ctr++) {
        printf ("%d,",FibonacciS(i));
        i++;
}
    return 0;
}
// function implementation
int FibonacciS(int N){
    // solution for the Fibonacci series
    if (N==0)
        return 0;
    else if (N==1)
        return 1;
    else
        return (FibonacciS(N-1)+FibonacciS(N-2));

}
                /* END OF PROGRAM */
