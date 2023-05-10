int main()
{
    FILE *filepointer;
    char filename[20];
    char buff[255];

    printf ("Enter file name to open: ");
    scanf(" %[^\n]", filename);

    filepointer=fopen(filename,"r");
    if (filepointer=NULL){
        printf("Error reading file...");
        exit(1);
    }
    fscanf(filepointer, "%[^\n]",buff);
    printf("%s",buff);


    fclose(filepointer);
}
