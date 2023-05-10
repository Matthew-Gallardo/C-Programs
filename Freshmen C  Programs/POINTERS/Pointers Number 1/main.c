
#include <stdio.h>

void number2 () {

		printf("\nExercise 3 - No.2\nint:");
    int i = 7;
    int *hi = &i;

		printf("\nhi is %p\n", hi);
    	printf("The value at cp is %d", *hi);

	hi = hi+1; 		// when we add 1, the memory of hi will add 4 bytes
    	printf("\nhi is %p\n", hi);
}	//No.2

void number3 () {
	printf("\nExercise 3 - No.3\ndouble:");
	double i = 7;
    double *pe = &i;

	printf("\npe is %p\n", pe);
    printf("The value at cp is %.2lf", *pe);

	pe = pe+1; 		//when we add 1, the memory of pe will add 8 bytes
    printf("\npe is %p\n", pe);
}	//No.3

void number4A () {
	printf("\nExercise 3 - No.4A\nchar:");
	char c = 'Z';
	char *cp = &c;
		printf("cp is 0x%08x\n", cp);
		printf("The character at cp is %c\n", *cp);

/* Pointer arithmetic - see what cp+1 is */

   cp = cp+2;		// when we add 2, the memory of cp will add 2 bytes
		printf("cp is 0x%08x\n", cp);
}	//No.4A

void number4B () {

	printf("\nExercise 3 - No.4B\nint:");
    int i = 7;
    int *hi = &i;

		printf("\nhi is %p\n", hi);
    	printf("The value at cp is %d", *hi);

	hi = hi+2; 		// when we add 2, the memory of hi will add 8 bytes
    	printf("\nhi is %p\n", hi);
}	//No.4B

void number4C () {
	printf("\nExercise 3 - No.4C\ndouble:");
	double i = 7;
    double *pe = &i;

	printf("\npe is %p\n", pe);
    printf("The value at cp is %.2lf", *pe);

	pe = pe+2; 		//when we add 2, the memory of pe will add 16 bytes
    printf("\npe is %p\n", pe);
}	//No.4C

int main( )
{
	printf("Exercise 3 - No.1\nchar:");
	char c = 'Z';
	char *cp = &c;
		printf("cp is 0x%08x\n", cp);
		printf("The character at cp is %c\n", *cp);

/* Pointer arithmetic - see what cp+1 is */

   cp = cp+1;		// when we add 1, the memory of cp will also add 1 byte
		printf("cp is 0x%08x\n", cp);

	number2();
	number3();
	number4A();
	number4B();
	number4C();
}	//No.1
