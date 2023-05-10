#include <stdio.h>
#include <stdlib.h>

void fibser (int);
int main()
{
   int N;
   printf ("How many number of terms in series? ");
   scanf ("%d",&N);



    fibser (N);
}
void fibser (N){
    int t1=0, t2=1, nt;

   printf("Fibonacci Series in %d Terms: %d, %d, ", N , t1, t2);
    while (t1<=N){
        printf ("%d, ", nt);
        nt=t1+t2;
        t1=t2;
        t2=nt;

   }
}
