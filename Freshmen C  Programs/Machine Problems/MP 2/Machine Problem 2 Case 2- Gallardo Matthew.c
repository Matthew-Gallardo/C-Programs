// Gallardo Matthew    BSCS 1-4

/*CASE STUDY 2
N factorial can be defined as the product of all integers from 1 to N and it is denoted by
the symbol N!. 0! (zero factorial) is defined as 1. Write a program that will input N and
would display N factorial. (Determine first if N is a nonnegative integer). */
#include<stdio.h>

int main() {

	int i, num;
	double j=1;

	//Getting the value from the user
	printf("Enter a number to find factorial: ");
	scanf("%d", &num);

		//Using for loop
		for (i=num; i > 1; i--) {
			j = j*i;
		}

		//Result of facrorial
		printf("The %d! is %.lf", num, j);
	}
	// End of the program
