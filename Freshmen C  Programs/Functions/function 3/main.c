#include <stdio.h>
#include <stdlib.h>

int power2 (int);


int main()
{
    int num;
        printf ("Enter a positive number");
        scanf ("%d", &num);
printf ("The largest power of two greater than or equal to %d is %d.\n",num, power2(num));
    return 0;
}

int power2 (int num){
 int value=2;
 while (value <num) {
    value=value *2;
 }
 return value;
}


