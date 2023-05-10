#include <stdio.h>
#include <stdlib.h>
/* Gallardo, Matthew BSCS 1-4 */
int main()
{
   double heading; /*compass heading in degrees*/
/* Input users compass heading */
printf("Please Input a Compass Heading between 0 and 360 Degrees.\n", heading);
scanf("%lf", &heading);
// if statement
/* if user input less than equal to 90 */
if(heading <= 90.0)
printf("Compass Bearing: North %.1f Degree East\n", heading);
/* if user input less than 180*/
else if(heading < 180.0)
printf("Compass Bearing: South %.1f Degree East\n", 180 - heading);
/* if user input less than equal to 270 */
else if(heading <= 270.0)
printf("Compass Bearing: South %.1f Degree West\n", heading - 180.0);
/* if user input less than 360 */
else if(heading <360.0)
printf("Compass Bearing: North %.1f Degree West\n", 360.0 - heading);
/* if user input equal to 360 */
else if(heading == 360.0)
printf("Compass Bearing: North %.1f Degree East\n", 360.0 - heading);
/*otherwise if invalid input */
else
printf("Please Input a Compass Heading between 0 and 360 Degrees.\n", heading);
    return 0;
}
