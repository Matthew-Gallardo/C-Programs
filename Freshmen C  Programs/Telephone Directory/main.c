#include <stdio.h>
#include <stdlib.h>
/* Telephone Directory
DATA:
Name (Last name, First name, Middle name)
Address (Address, City, Province)
Contact Information (Mobile number. email address)

*/
struct TelephoneDirectory {
    //name
      char LastName[20],
           FirstName[30],
           MiddleName[20];
    //address
      char Address[30],
           City[20],
           Province[20];
    //contact number

      char Email[30];
      int MobileNumber;
    };
    struct node {
        struct info data;
        struct node *next;


    };

int main() {

     struct TelephoneDirectory info[5];// variable 5 infos

// using for loops to input 5 infos
    for (int i=0;i<5; i++) {

        printf("\nInformation[%d]:\n",i+1);
        printf("FULL NAME\n");
        printf("LastName: ");
        scanf(" %[^\n]",info[i].LastName);
        printf("\nFirst Name: ");
        scanf(" %[^\n]",info[i].FirstName);
        printf("\nMiddle Name: ");
        scanf(" %[^\n]",info[i].MiddleName);
        printf ("FULL ADDRESS\n");
        printf("\n Address:");
        scanf(" %[^\n]",info[i].Address);
        printf ("\nCity: ");
        scanf(" %[^\n]",info[i].City);
        printf("\nProvince: ");
        scanf(" %[^\n]",info[i].Province);
        printf("CONTACT INFORMATION\n");
        printf("\nEmail Address: ");
        scanf(" %s",info[i].Email);
        printf("\nMobile Number: ");
        scanf(" %d",&info[i].MobileNumber);




} {
    // Displaying of 3 students infos using for loops
         printf("Telephone Directory Informations:\n");
            for (int i=0;i<5;i++) {
            printf ("\Information [%d]:\n",i+1);
            printf("Full Name: %s, %s %s\n",info[i].LastName,info[i].FirstName,info[i].MiddleName);
            printf("\n");
            printf("Full Address: %s , %s, %s\n",info[i].Address,info[i].City,info[i].Province);
            printf("\n");
            printf("Contact Information\n");
            printf ("Mobile Number: %d\n",info[i].MobileNumber);
            printf("Email Address: %s\n",info[i].Email);
            }
                            }
}



