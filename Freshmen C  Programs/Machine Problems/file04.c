//Read a text file
#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE *fp;
	char filename[20];
	char buff[255]; 

	printf("Enter filename to open: ");
	scanf(" %[^\n]", filename);

	fp = fopen(filename,"r");
	if (fp == NULL) {
		printf("Error reading file.\n");
		exit(1);
	}

	while(fscanf(fp,"%[^\n]",buff) != 0 ) {
		printf("%s\n", buff);
	}
	
	fclose(fp);
}