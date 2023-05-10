#include <stdio.h>
#include <stdlib.h>
/*Gallardo, Matthew BSCS 1-4 */

int main()
{
    char color; //character input of the user
    // Guide for the user what is the valid input
    printf("'O' or 'o' for Orange\n");
    printf("'B' or 'b' for Brown\n");
    printf("'Y' or 'y' for Yellow\n");
    printf("'G' or 'g' for Green\n");
    //Get the users input
    printf("Enter Cylinder Color:");
    scanf("%c", &color);
    
/* using if statement */
// if the user input color orange 
if (color== '0'|| color== 'o') {
    printf("The contents of the cylinder is: Ammonia");
    } //if the user input color brown
    else if (color == 'B'||color=='b'){
    printf("The contents of the cylinder is: Carbon Monoxide");
    } //if the user input color yellow
    else if (color == 'Y'||color=='y') {
    printf("The contents of the cylinder is: Hydrogen");
    } // if the user input color green
    else if (color =='G' || color =='g') {
    printf("The contents of the cylinder is:Oxygen");
    } // if the user chooses invalid input
    else printf ("No gas cylinder of that color!");

    return 0;
}
