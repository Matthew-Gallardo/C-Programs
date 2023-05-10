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
	/*
	fscanf(fp,"%[^\n]",buff);
	printf("%s", buff);
	fscanf(fp,"%[^\n]",buff);
	printf("%s", buff);
	fscanf(fp,"%[^\n]",buff);
	printf("%s", buff);
	*/

	fgets(buff, 255, fp);
	printf("%s", buff);
	fgets(buff, 255, fp);
	printf("%s", buff);
	fgets(buff, 255, fp);
	printf("%s", buff); 
	// problem: what if we do not know how many lines there are in a file

	fclose(fp);
}