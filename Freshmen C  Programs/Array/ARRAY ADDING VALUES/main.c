#include <stdio.h>
#include <stdlib.h>

void PrintArray(int[],int[], int , int);
int main()
{
    int xarray [10];
    int yarray [5] = {20,30,30,20,10};
    printf ("Enter 10 values for the array: ");
    for (int i=0; i<10; i++)
        scanf("%d", &xarray[i]);

        PrintArray(xarray,yarray,10,5);

}


void PrintArray(int x[],int y[],int size1, int size2){
 for (int i=0; i<size1; i++)
        printf ("x[%d]= %d\n", i , x[i]);

          printf ("\n");

 for (int i=0; i<size2; i++)
        printf ("y[%d]= %d\n", i , y[i]);

}



