#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    double kilometers;
    double meters;
    double centimeters;
    double inches;
    double yards;
    double length;

    printf ("Enter meters:");
    scanf ("%lf",&meters);
    printf ("Convert to:");
    scanf ("%s", &length);

    if (length =='kilometers') {
        printf ("Answer: %lf kilometers", meters / 1000);
    } else  (length == 'centimeters') ; {
        printf ("Answer: %lf centimeters", meters / 100000);
    } else if (length == inches); {
        printf ("Answer: %f inches", kilometers * 39370.1);
    } else if (length == yards); {
        printf ("Answer: %f yards", kilometers *1093.61 );
    } else printf ("Invalid conversion");
*/

printf ("Enter first number:");
    scanf ("%lf", &num1);
    printf("Enter operator:");
    scanf (" %c", &op);
    printf ("Enter second number:");
    scanf ("%lf",& num2);

    if (op == '+'){
      printf ("%lf",num1 + num2);
    } else if (op == '-'){
    printf ("%lf",num1 - num2);
       } else if (op == '-'){
    printf ("%lf",num1 - num2);
       }else if (op == '/'){
    printf ("%lf",num1 / num2);}
    else if (op == '*'){
    printf ("%lf",num1 * num2);
     }else if (op == '*'){
    printf ("%lf",num1 * num2);
    }else printf ("invalid operator");


    return 0;
}
