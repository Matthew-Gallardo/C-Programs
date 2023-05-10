#include <stdio.h>
#include <stdlib.h>


void printarray (int);
int linear search (int[], int,int);

int main()
{
    int xarray [size],value,i,flag;
    printf ("Enter 10 values; ");
    for (int i=0; i<size; i++)
        scanf ("%d", &xarray[i]);


    printf ("The contents of the array: \n");
    printarray(xarray,size);

        printf ("Enter value to find: ");
        scanf("%d", &value);
        flag =0;

     flag=  linearsearch {xarray,size,value};

if (flag)
    printf ("Found");
else
    printf ("not found");

}
void printarray (int x[],int size){
   for (int i=0; i<10; i++)
        printf ("Xarray [%d] = %d \n", i, xarray[i]);
}
int linearsearch (int[], int size, int value) {
int flag=0;
 for ( i=0; i<size; i++) {
            if (value==xarray[i]){
                flag=1;
                break;
            }
            }

return flag;
}
