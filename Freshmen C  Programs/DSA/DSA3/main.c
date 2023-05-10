/*Programmer: Dayag, Jahren Hans P. 	Section: BSCS 2-4

Purpose of this program: to delete an element at desired position from an array.*/

#include <stdio.h>

int main(){
  int input,arrayDel[100],counter,del;


       printf("Input the size of array : ");
       scanf("%d", &input);
    //to store into array in an ascending order
       printf("Input %d elements in the array in ascending order:\n",input);
       for(counter=0;counter<input;counter++) {
	      printf("element - %d : ",counter);
	       scanf("%d",&arrayDel[counter]);
	    }

          printf("\nInput the position where to delete: ");
           scanf("%d",&del);
  	//searching of the value that will be deleted
        counter=0;
          while(counter!=del-1){

           counter++;
           }

    //the value of the value that is deleted will be replaced
         while(counter<input){
            arrayDel[counter]=arrayDel[counter+1];
            counter++;
       }

  	//printing of the new array list
         input;
          printf("\nThe new list is : ");
       for(counter=0;counter<input;counter++){
		   printf("  %d",arrayDel[counter]);
		}
}
