#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5]= {10, 20 , 30, 40,50};
    int *P;

    P = A;// Since A is an array address there is no need to & (address operator)

    printf ("Array A is found in %p\n", A);
    printf ("Element A[0] IS found in %p\n" , &A[0]);
    printf ("P is found in %p\n", P);

    printf ("\n");
    printf ("Element A[0] IS found in %p\n" , &A[0]);
    printf ("Element A[1] IS found in %p\n" , &A[1]);
    printf ("Element A[2] IS found in %p\n" , &A[2]);
    printf ("Element A[3] IS found in %p\n" , &A[3]);
    printf ("Element A[4] IS found in %p\n" , &A[4]);

    printf ("\nAddresses using pointers\n");
    for (int i=0; i<5; i++) {
        printf ("Element A[%d] is found in %p\n", i,P);
        P++;
    }
    printf ("\nP now is located in %p\n",P);

}
