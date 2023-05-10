// Gallardo Matthew   BSCS 1-4
/* 
CASE STUDY 2 - PASSWORD
Write a program to input your password. Password must be invisible or may not be seen
by the user as you input your password.
*/

#include <stdio.h>
#include<conio.h>
#include<string.h>

int main (){

 char s[20],ch;
 int i;
// input password from the user
	printf ("Enter a Password: ");
	int p=0;
	// how the password replaced by *
   do{
        s[p]=getch();
        if(s[p]!='\r'){
            printf("*");
        }
        p++;
    }while(s[p-1]!='\r');
    s[p-1]='\0';
    
    //showing the password from the user
    printf("\nYou have entered %s as password.",s);


	return 0;
}
