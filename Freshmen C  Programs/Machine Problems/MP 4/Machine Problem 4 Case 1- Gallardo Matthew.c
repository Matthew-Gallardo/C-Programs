// Gallardo Matthew    BSCS 1-4
/* 
CASE STUDY 1 - FLAMES
Write a program to ask the user to input the name of boy and name of girl. Count the
number of common letters to their names and add them up. Determine the corresponding
equivalent using the game FLAMES!
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char str1[50], str2[50];
	int i, j, ctr1, ctr2, total, commonletters;
// getting the name of the boy and girl
	printf("FLAMES\n");
	printf("Enter the Name of the Boy: ");
	scanf ("%[^\n]",str1);
	printf("Enter the Name of the Girl: ");
	scanf (" %[^\n]",str2);
	printf("\n");

	for(j=0; j<=strlen(str1); j++) {
		for(i=0; i<=strlen(str2); i++) {
			if (str1[i]==str2[j]) {
				if(isalpha(str1[i])!=0) {
					printf("%c, ", str1[i]);
					ctr1++;
					break;
			}

		}

	}
}
	printf("= %d", ctr1);
	printf("\n");

	for(i=0; i<=strlen(str2); i++) {
		for(j=0; j<=strlen(str1); j++) {
		if (str1[i]==str2[j]) {
			if(isalpha(str2[j])!=0) {
				printf("%c, ", str2[j]);
				ctr2++;
				break;
			}

		}

	}
}
// printing the common letters of 2 names
	printf("= %d", ctr2);
	printf("\n");
	commonletters= ctr1 + ctr2;
	printf("Total Number of common letters:%d ", commonletters);
	printf("\n");

	total = ctr1 + ctr2;
	//printing the output of flames

		if		(total==1||total==7||total==13||total==19||total==25)
			printf("Friends\n");
		else if (total==2||total==8 ||total==14 ||total==20 ||total==26)
			printf("Lovers\n");
		else if (total==3||total==9||total==15||total==21||total==27)
			printf("Angry\n");
		else if (total==4||total==10||total==16||total==22 ||total==28)
			printf("Marriage\n");
		else if (total==5||total==11||total==17||total==23||total==29)
			printf("Enemy\n");
		else if (total==6||total==12 ||total==18 ||total==24 ||total==30)
			printf("Soulmates\n");
		else
			printf("The name is too long");

return 0;
}
