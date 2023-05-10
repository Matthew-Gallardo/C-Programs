//Open a file for writing
#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE *fp;
	char filename[20];

	printf("Enter filename to create: ");
	scanf(" %[^\n]", filename);

	fp = fopen(filename,"w");
	if (fp == NULL) {
		printf("Error creating file.\n");
		exit(1);
	}
	fprintf(fp,"%s","This is a sample text for a text file.\n");
	fprintf(fp,"%s","This one without a newline ");
	fprintf(fp,"%s","This should be printed after the previous\n");
	fprintf(fp,"%d\n",35);

	fclose(fp);
}