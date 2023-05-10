#include <stdio.h>

int main(){

	//initialization of variable
    int arr1[100];
    int input, val, i, sort;



	//input array size from the user
    printf("Input the size of array : ");
    scanf("%d", &input);

	//input the elements of the array
       printf("Input %d elements in the array :\n",input);
       for(i=0;i<input;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }

	//computation to get the elements of array in sorted ascending order
    for(i=0; i<input; i++)
    {
        for(sort=i+1; sort<input; sort++)
        {
            if(arr1[sort] <arr1[i])
            {
                val = arr1[i];
                arr1[i] = arr1[sort];
                arr1[sort] = val;
            }
        }
    }


	//printing of the elements of array in ascending order
	printf("\nElements of array in sorted ascending order: \n");
    for(i=0; i<input; i++)
    {
        printf("%d  ", arr1[i]);
    }
}
