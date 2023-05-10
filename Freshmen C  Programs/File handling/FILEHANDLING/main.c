//Open a file for writing
#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE *FILE1;
	char CYBER[] = "BARKADA";

	FILE1 = fopen("SAMPLE1.DAT","wb");
	if (FILE1 == NULL) {
		printf("Error creating file.\n");
		exit(1);
	}

    fwrite (&CYBER,sizeof(CYBER),1,FILE1);



	fclose(FILE1);
}
