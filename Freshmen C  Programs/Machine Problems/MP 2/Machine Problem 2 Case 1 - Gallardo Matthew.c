// Gallardo Matthew       BSCS 1-4
/*CASE STUDY 1
Write a program that accepts a positive integer and gives its prime factorization, that
expresses the integer as a product of primes. */

#include <stdio.h>

int main () {
	int num, i;

	//Getting the value from the user
	printf ("Please enter positive integer: ");
	scanf ("%d", &num);

	//This will print out the prime factorization of the inputted number
	printf ("The Prime factorization are: ");

	//By using for loop
	for (i=2;num>1; i++) {

		//And, while loop
		while (num%i==0) {
			printf ("%d ", i);
			num=num/i;
		}
	}
}

