// Gallardo Matthew    BSCS 1-4
/*
CASE STUDY 3 - PASSWORD + PIG LATIN
Write a program to input your password. Password must be invisible or may not be seen
by the user as you input your password. If the password is correct, call function
Pig_Latin_Converter
Rules for Pig Latin –
Each word is converted individually according to the following rules:
 1. If the word has no vowels (other than 'y', e.g. "my", "thy") append "yay" to it -- i.e.,
"myyay", "thyyay".

 2. If the word begins with a vowel (e.g., "art", "else") append "yay" to the word (i.e.,
"artyay", "elseyay").

 3. If the word begins with a consonant (e.g., "song", "pig") divide the word at the first
vowel, swapping the front and back halves and append "ay" to the word (i.e., "ongsay",
"igpay")

*/
#include <stdio.h>
#include<conio.h>
#include<string.h>

void Pig_Latin_Converter(char s[20]){
	int c=0;
	int fletter;
	int p;
	char text[20]={0};
	int loop,j;
	int i;
	char output[20];
    while(s[c]!='\0')
        // statement if the word has vowel or not and printing the output
    {

        if(s[c]=='a' ||s[c]=='e' ||s[c]=='i' ||s[c]=='o' ||s[c]=='u' || s[c]=='A' || s[c]=='E' || s[c]=='I' || s[c]=='O' || s[c]=='U')
        p=1;

        c++;
    }
    fletter = s[0];
    if (fletter == 'a' || fletter == 'e' || fletter == 'i' || fletter == 'o' || fletter == 'u'  || fletter == 'A' || fletter == 'E'  || fletter == 'I' || fletter == 'O'  || fletter == 'U'){

    	printf("\nThe Password is %syay", s);
	}
	else {
		for(i = 1; s[i] != '\0'; i++){
		output[j] = s[i];
		if(s[i] == ' ' && s[i+1] != ' '){
			i++;
		}
		j++;
	}
		printf ("\nThe Password is %s%cay", output, s[0]);
	}

    if (p!=1) {
	printf("\nThe Password is %syay ",s);
	}

}
// getting the password from the user
int main (){

 char s[20],ch;
 int i;

	printf ("Enter a Password: ");
	int p=0;
   do{
        s[p]=getch();
        if(s[p]!='\r'){
            printf("*");
        }
        p++;
    }while(s[p-1]!='\r');
    s[p-1]='\0';

    // showing the password
    printf("\nYou have entered %s as password.",s);

    Pig_Latin_Converter(s);


	return 0;
}
