/* MATTHEW GALLARDO BSCS 1-4  ACKERMANN'S FUNCTION*/
#include<stdio.h>
//function declaration
int Ackermanns(int num1, int num2);

int main()
{
        int num1,num2;
        // input of two numbers
        printf ("Ackermann's Function\n");
        printf("Input two numbers : ");
        scanf("%d%d",&num1,&num2);
        printf("\nRESULT : %d\n",Ackermanns(num1,num2));
}
//function implementation
int Ackermanns(int num1, int num2)
{
    //solution to the function
        if(num1==0)
                return num2+1;
        else if(num2==0)
                return Ackermanns(num1-1,1);
        else
                return Ackermanns(num1-1,Ackermanns(num1,num2-1));
}
                        /* END OF PROGRAM */

