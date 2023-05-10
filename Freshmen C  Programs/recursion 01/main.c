#include <stdio.h>
#include <stdlib.h>

int factorial(int);

int main()
{
    int value, solution;
    printf ("Input number: ");
    scanf ("%d", &value);

    solution =factorial (value);
    printf ("Answer of %d ! is %d.",value, solution);
}
int factorial (int value) {

if (value==0)
    return 1;
    else
        return value *factorial (value-1);
}
