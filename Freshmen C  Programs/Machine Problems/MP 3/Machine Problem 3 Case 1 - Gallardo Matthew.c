// Gallardo Matthew    BSCS 1-4
/*CASE STUDY 1
The proper divisor of an integer N are the positive divisors less than N, a positive integer
is said to be DEFICIENT, PERFECT or ABUNDANT numbers if the sum of its proper
divisors is less than, equal to or greater than the number respectively. Write a program
using function call by reference to input integer N and call function KOMPUTE to
determine of integer N is DEFICIENT, PERFECT or ABUNDANT */
#include <stdio.h>

int N(int *);
void KOMPUTE(int x, int i, int sum, int min);

int main() {

	int x, i, sum, min;
	N(&x);
	printf("The divisor of %d are: ", x);
	KOMPUTE(x, i, sum, min);
	return 0;
}
int N(int *x){
	printf("\nPlease input a number: ");
	scanf("%d", &*x);


	return *x;
}
void KOMPUTE(int x, int i, int sum, int min){

	for(i = 1; i < x; i++) {
		if((x%i) == 0){
			printf("\n%d", i);
			sum = sum + i;
		}
	}
	min = sum-1;
	printf ("\nThe sum of the divisor is: %d", min);

	if (min > x) {
		printf ("\n%d > %d is ABUNDANT", min, x);
	}
	else if (min < x) {
		printf ("\n%d < %d is DEFICIENT", min, x );
	}
	else if (min = x){
		printf ("\n%d = %d is PERFECT", min, x);
	}

}
