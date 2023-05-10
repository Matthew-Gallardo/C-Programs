#include <stdio.h>
#include <stdlib.h>

float absnum(float);

int main()
{
    float realnum;

    printf("Enter real number:\n");
    scanf ("%f", &realnum);

    printf ("Absolute value of %.2f is %.2f.\n", realnum, absnum(realnum));
    return 0;
}
float absnum(float realnum){
if (realnum >0)
    return realnum;
else
    return (-1 *realnum);
}
