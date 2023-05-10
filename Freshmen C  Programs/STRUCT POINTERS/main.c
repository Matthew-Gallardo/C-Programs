#include <stdio.h>
#include <stdlib.h>

struct record
{
char name[10];
int age;
};
int main () {
struct record myfriend = {"Dhang", 24};
struct record *ptrtomyfriend = &myfriend;

 printf ("Displaying Old entries\n");
 printf("Friend Name: %s\n",ptrtomyfriend->name);
 printf("Friend Age: %d\n",ptrtomyfriend->age);

printf ("Enter new name: ");
scanf(" %[^\n]",ptrtomyfriend->name);
printf("Enter new age: ");
scanf ("%d",&ptrtomyfriend->age);

 printf ("Displaying New entries\n");
 printf("Friend Name: %s\n",ptrtomyfriend->name);
 printf("Friend Age: %d\n",ptrtomyfriend->age);





}

