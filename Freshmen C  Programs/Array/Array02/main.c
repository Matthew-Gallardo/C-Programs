#include <stdio.h>
#include <stdlib.h>

void PrintArray(int[],int);
int main()
{
    int xarray [10];
    int yarray [5] = {20,30,30,20,10};
   /* printf ("Enter 10 values for the array: ");
    for (int i=0; i<10; i++)
        scanf("%d", &xarray[i]); */

        PrintArray(yarray,5);

          printf ("\nAfter Calling func\n");
          for (int i=0; i<5; i++)
            printf ("yarray[%d]= %d\n", i , yarray[i]);




}


void PrintArray(int x[],int size){

    x[0]=100;

 for (int i=0; i<size; i++)
        printf ("x[%d]= %d\n", i , x[i]);


}



