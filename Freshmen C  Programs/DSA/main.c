

Purpose of this program: *to find the maximum and minimum element in an array. */
#include <stdio.h>

int main()
{
    int arrayMinMax[100],maxNum, minNum, input, i;


	  //to input how many numbers you want to store in an array

       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&input);

       printf("Input %d elements in the array :\n",input);
       for(i=0; i<input; i++)
 {

	      printf("element - %d : ",i);
	      scanf("%d",&arrayMinMax[i]);
	    }

	//setting the the value of max and min as the first element of the array
    maxNum = arrayMinMax[0];
    minNum = arrayMinMax[0];


    for(i=1; i<input; i++){

	    if(arrayMinMax[i]>maxNum){	//to find the the maximum number in the array
            maxNum = arrayMinMax[i];
        }


        if(arrayMinMax[i]<minNum){ //to find the the minimum number in the array
            minNum = arrayMinMax[i];
        }
    }

   //printing of result
    printf("\nMaximum element is : %d\n", maxNum);
    printf("Minimum element is : %d\n\n", minNum);
}
