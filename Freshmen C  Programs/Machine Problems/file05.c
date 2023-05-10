//Telephone directory using Files - Writing to a File
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
	FILE *fp;
	struct info data;
	int entries;

	fp = fopen("teledir.dat","w");
	if (fp == NULL) {
		printf("Error creating file.");
		exit(1);
	}

	printf("How many entries to input? ");
	scanf("%d", &entries);
	
	for(int i=1; i<=entries; i++) {
		printf("Enter entry #%d\n", i);
		printf("Enter lastName: ");
		scanf(" %[^\n]", data.lastName);

		printf("Enter firstName: ");
		scanf(" %[^\n]", data.firstName);

		printf("Enter middleName: ");
		scanf(" %[^\n]", data.middleName);

		printf("Enter telephone: ");
		scanf("%d", &data.telephone);

		printf("Enter email: ");
		scanf(" %[^\n]", data.email);

		fprintf(fp,"%s\t%s\t%s\t%d\t%s\n",data.lastName, data.firstName, data.middleName, data.telephone, data.email);
	}

	fclose(fp);
}
