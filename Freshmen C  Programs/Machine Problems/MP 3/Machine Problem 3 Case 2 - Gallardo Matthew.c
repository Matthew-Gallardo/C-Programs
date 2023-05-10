// Gallardo Matthew      BSCS 1-4
	/*CASE STUDY 2
	This program will call function TRIANGLE to determine if a given sides is equilateral,
isosceles or scalene. A triangle is EQUILATERAL if all the three sides have the same
length. ISOSCELES if only two sides have the same length and SCALENE if no sides
have the same length. Input the length of the three sides and print whether the triangle is
equilateral, isosceles or scalene.	*/

#include<stdio.h>
void TRIANGLE(int x, int y, int z) // variable name for the three sides
{
  	// if all sides are equal, it is EQUILATERAL
    if (x==y && y==z)
    {
        printf("This is an Equilateral Triangle.\n");
    }
    // if two sides are equal, it is ISOSCELES
    else if (x==y || x==z || y==z)
    {
        printf("This is an Isosceles Triangle.\n");
    }
    //Otherwise, if no sides are equal it is SCALENE
    else
    {
        printf("This is Scalene Triangle.\n");
    }
}

int main () {

	int x,y,z;

	//Getting the three sides from the user
    printf("Please input the three sides of triangle: ");
    scanf("%d %d %d", &x, &y, &z);
	TRIANGLE (x, y, z);

    return 0;
}
	//End of the program
