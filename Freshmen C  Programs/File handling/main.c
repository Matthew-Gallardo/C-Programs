#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filepointer;
    char filename[20];

    printf ("Enter file name to create: ");
    scanf(" %[^\n]", filename);

    filepointer=fopen(filename,"w");
    if (filepointer==NULL){
        printf("Error creating file...");
        exit(1);
    }
    fprintf(filepointer,"%s", "Ang pogi mo matt.\n");
    fprintf(filepointer,"%s", "POTANGINAMO.\n");
    fprintf(filepointer,"%d\n", 69);

    fclose(filepointer);
}
