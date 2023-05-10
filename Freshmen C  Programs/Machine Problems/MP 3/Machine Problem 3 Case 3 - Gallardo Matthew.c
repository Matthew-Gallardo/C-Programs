// Gallardo Matthew    BSCS 1-4
/*
CASE STUDY 3 Military Time
General Program Definition
In military, when one gives a time it is usually in a 24-hour notation (e.g. 1300
means 1:00PM). Write a program that converts from 24-hour notation to 12-hour notation
using function.
Input Specifications
The input must be a single integer ranging from 0 to 2400. Any other value must
result into an input error which the program should display as a message to the user
before it halts program execution.
Output Specifications
Output the time in 12-hour notation using the following format: 1:00 PM using a
colon to separate the hour part from the minute part and adding the abbreviations AM or
PM to indicate what part of the day it is. Note that you must observe the 2-digit display
*/

#include <stdio.h>

void time();
int main(void)
{
    int morning, hour, min;
    printf ("24 hr to 12 hr notation convertion\n");
    printf("Input 24-hour notation: ");
    scanf("%02d%02d", &hour, &min);

	time(hour, min, morning);


    return 0;
}
void time (int hour, int min, int morning){

    if (hour > 24 || min > 59)
    {
    printf("Invalid Input");
    return 1;
    }

    if (hour >= 12)
     {
        morning = 1;

        if (hour > 12)
        {
            hour -= 12;
        }

     }
      else
    {
        morning = 0;
    }

      if (morning == 0)
    {
        printf("\nIt is %02d:%02d A.M.\n", hour, min);
    }
    else
    {
        printf("\nIt is %02d:%02d P.M.\n", hour, min);
    }
}
