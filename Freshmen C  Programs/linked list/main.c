#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
int main()
{
   struct node *current, *head, *tail;


/*
   current = malloc(sizeof(struct node));
   current ->data=30;
   current ->next=NULL;

   head=current;
   tail=current;
   //2nd node
   current = malloc(sizeof(struct node));
   current -> data = 5;
   current -> next = NULL;

   tail -> next =current;
   tail = current;

  current= malloc(sizeof(struct node));
  current -> data =10;
  current -> next = NULL;

   tail -> next =current;
   tail = current;

  // 4th
  current= malloc(sizeof(struct node));
  current -> data =50;
  current -> next = NULL;

   tail -> next =current;
   tail = current;

  //5h
    current= malloc(sizeof(struct node));
  current -> data =2;
  current -> next = NULL;

  tail ->next = current;
  tail= current;

  */
    int entries;
  printf ("\nHow many entries? ");
  scanf("%d", &entries);

for (int i=1; i<=entries; i++) {
    current= malloc(sizeof(struct node));

    printf("Enter Value %d: ", i);
    scanf ("%d" , &current->data);
    current->next =NULL;
    if (i==1)
        head=current;
    else
        tail ->next= current;
    tail=current;

}

  //printing

    current=head;
    while (current != NULL){
        printf ("%d ", current->data);
        current=current->next;  // to move current

    }
    printf ("\n");


// linear search
 int target, found;
    printf("\nSearch : ");
    scanf ("%d", &target);

    current=head;;
     while (current != NULL){
        printf ("The target %d  is found.\n", target);
        found=1;
       break;
    }
    current=current->next;



}

