#include <stdio.h>
#include <stdlib.h>

int main()
{

/* Gallardo , Matthew BSCS 1-4 */

// Declaring variables
	int pollutant_number;
	int odometer_reading;
	double grams_emitted_per_mile;

// information for the user
    printf ("(1) Carbon monoxide\n");
    printf ("(2) Hydrocarbons\n");
    printf ("(3) Nitrogen oxides\n");
    printf ("(4) Nonmethane hydrocarbons\n");

// User Input type of pollutant , number of grams emitted per mile an odometer reading
    printf ("Enter pollutant number>>");
    scanf ("%d", &pollutant_number);
    printf ("Enter number of grams emitted per mile>>");
    scanf ("%lf", &grams_emitted_per_mile);
    printf ("Enter odometer reading>>");
    scanf ("%d", &odometer_reading);

//if user input pollutant number 1

if ((pollutant_number==1)&&(odometer_reading <=50000)) // first 50000 miles
    {
        if (grams_emitted_per_mile > 3.4)
            printf ("Emissions exceed permitted level of 3.4 grams/mile");
        else printf ("Emmissions did not exceed in permitted level");
    }
    else if  ((pollutant_number==1)&&(odometer_reading >50000)) //second 50000 miles
    {
        if (grams_emitted_per_mile > 4.2)
            printf ("Emissions exceed permitted level of 4.2 grams/mile");
        else printf ("Emmissions did not exceed in permitted level");
    }
// if user input pollutant number 2
else if  ((pollutant_number==2)&&(odometer_reading <=50000)) // first 50000 miles
    {
        if (grams_emitted_per_mile > 0.31)
            printf ("Emissions exceed permitted level of 0.31 grams/mile");
        else printf ("Emmissions did not exceed in permitted level");
    }
    else if  ((pollutant_number==2)&&(odometer_reading >50000))//second 50000 miles
    {
        if (grams_emitted_per_mile > 0.39)
            printf ("Emissions exceed permitted level of 0.39 grams/mile");
        else printf ("Emmissions did not exceed in permitted level");
    }
// if user input pollutant number 3
else if  ((pollutant_number==3)&&(odometer_reading <=50000))// first 50000 miles
    {
        if (grams_emitted_per_mile > 0.4)
            printf ("Emissions exceed permitted level of 0.4 grams/mile");
        else printf ("Emmissions did not exceed in permitted level");
    }
    else if  ((pollutant_number==3)&&(odometer_reading >50000))//second 50000 miles
    {
        if (grams_emitted_per_mile > 0.5)
            printf ("Emissions exceed permitted level of 0.5 grams/mile");
        else printf ("Emmissions did not exceed in permitted level");
    }
// if user input pollutant number 4
else if  ((pollutant_number==4)&&(odometer_reading <=50000))//first 50000 miles
    {
        if (grams_emitted_per_mile > 0.25)
            printf ("Emissions exceed permitted level of 0.25 grams/mile");
        else printf ("Emmissions did not exceed in permitted level");
    }
       else if  ((pollutant_number==4)&&(odometer_reading >50000))//second 50000 miles
    {
        if (grams_emitted_per_mile > 0.31)
            printf ("Emissions exceed permitted level of 0.31 grams/mile");
        else printf ("Emmissions did not exceed in permitted level");
    }
// otherwise if invalid input
else printf ("INVALID INPUT!");





    return 0;
}
