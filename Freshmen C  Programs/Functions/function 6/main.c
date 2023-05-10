#include <stdio.h>
#include <stdlib.h>

void exchange (int *a, int *b);
int main()
{
    int v1, v2;

    printf("Enter two positive values:\n");
    scanf ("%d%d", &v1,&v2);

    printf ("Before\n");
    printf ("v1 is %d.\n", v1);
    printf ("v2 is %d.\n", v2);

    exchange (&v1, &v2);
    printf ("After\n");
    printf ("v1 is %d.\n", v1);
    printf ("v2 is %d.\n", v2);

    return 0;
}

void exchange (int *a, int *b){
 int temp;
 temp = *a;
 *a= *b;
 *b=temp;
}

