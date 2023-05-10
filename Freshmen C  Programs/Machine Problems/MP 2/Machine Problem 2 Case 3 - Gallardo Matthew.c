// Gallardo Matthew      BSCS 1-4

/*CASE STUDY 3
	This program allows a user to input a non-negative integer and call a function DWARF to determine
if the integer is DWARF or NOT. An integer is said to be DWARF if the sum of its factors
is greater than the half of the number.	*/

#include <stdio.h>

int factors (int n) {
	int i, f, s=0; // s for the sum, f for the factor
    float h; // h for the half

	//Printing out the factors of the inputted number
	printf ("\nFactors are: ");

	//The program will continue using for loop and will print an output
    for (i=1; i<n; i++){
        if (n % i == 0){
            f = i;
            s = s + f;

			//This is the output
            printf ("%d ", i);
       }
    }

    //Function to add the factors to get the sum
	//And, half of the inputted number
    h = n/(float)2;
    printf("\nSum of its factors: %d", s);
    printf("\nHalf of the number: %.1f", h);

    //if the number is DWARF
   	if (s>h) {
    		printf("\n%d is DWARF", n);
			 }

	//Otherwise NOT DWARF
		else
			printf("\n%d is NOT DWARF", n);

	return n;
}

int main () {

	int n;

	//Getting the value from the user
    printf("Input a number: ");
    scanf("%d", &n);
	factors (n);

    return 0;
}
	//End of the program
