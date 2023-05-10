//Telephone directory using Files - Reading from a File
#include<stdio.h>
#include<stdlib.h>

struct info {
	char lastName[15];
	char firstName[15];
	char middleName[15];
	int telephone;
	char email[20];
};

int main() {
	FILE *FILE1;
	struct info data;

	fp = fopen("teledir.dat","r");
	if (fp == NULL) {
		printf("Error reading file.");
		exit(1);
	}

	while(fscanf(fp,"%s%s%s%d%s",data.lastName, data.firstName, data.middleName, &data.telephone, data.email) != EOF) {

	printf("%15s%15s%15s%11d%20s\n", data.lastName,
			data.firstName, data.middleName,
			data.telephone, data.email);
	}

	fclose(fp);
}

	//EOF - End of File is a marker




