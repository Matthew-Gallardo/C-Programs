// GALLARDO MATTHEW BSCS 1-4
#include <stdio.h>
#include <stdlib.h>
/* Create a template for a structure of student record consisting of five fields:
Student ID(int), first name(string), last name(string), total units completed(int), and
accumulated grade point average(float).
*/

struct Record {
    int studentID;
    char firstname[20];
    char lastname[20];
    int units;
    float gpa;
    };

    int main(){
        struct Record student[3];


    for (int i=0;i<3; i++) {

        printf("\nEnter data for Student[%d]:\n",i+1);
        printf("Student ID: ");
        scanf("%d",&student[i].studentID);
        printf("\nFirst Name: ");
        scanf(" %s",student[i].firstname);
        printf("\nLast Name: ");
        scanf(" %s",student[i].lastname);
        printf("\nTotal Units Completed: ");
        scanf("%d",&student[i].units);
        printf ("\nGrade Point Average (GPA):");
        scanf("%f",&student[i].gpa);
        printf("\n");
    }
        for (int i=0;i<3;i++) {
            printf("\nStudent Record:\n");
            printf ("Student [%d] Information:\n",i+1);
            printf("Name is %s %s\n",student[i].firstname,student[i].lastname);
            printf("Student ID is %d\n",student[i].studentID);
            printf ("Total units completed is %d\n",student[i].units);
            printf("Accumulated Grade Point Average is %.2f\n",student[i].gpa);


    }






    }



