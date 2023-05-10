#include <stdio.h>
#include <stdlib.h>

int main()
{
    int xarray [10];//]={0,0,0,0,0,0,0,0,0,0,0};
/*
    xarray[0]=0;
    xarray[1]=0;
    xarray[2]=0;
    xarray[3]=0;
    xarray[4]=0;
    xarray[5]=0; ASSIGNMENT
    xarray[6]=0;
    xarray[7]=0;
    xarray[8]=0;
    xarray[9]=0;
    */
    // Initializing Using Loops
    for (int i=0; i<10; i++)
        xarray[i]=3;

    printf ("The contents of the array: \n");
    for (int i=0; i<10; i++)
        printf ("Xarray [%d] = %d \n", i, xarray[i]);



    return 0;
}
