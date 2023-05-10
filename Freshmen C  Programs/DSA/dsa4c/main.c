#include <stdio.h>
#include <stdlib.h>
struct node {
 int num;
 struct node * next;
}*strNode;

void Input(int numOfNodes);
void display();
int main()
{
 int numOfNodes;
 strNode = NULL;
 printf(" Input the number of nodes : ");
 scanf("%d", &numOfNodes);

 Input(numOfNodes);
 display();
 return 0;
}
void Input(int numOfNodes){
 int i, num;
 struct node *prev, *newnode;

if(numOfNodes >= 1)
 {
 strNode = (struct node *)malloc(sizeof(struct node));
 printf(" Input data for node 1 : ");
 scanf("%d", &num);
 strNode->num = num;
 strNode->next = NULL;
 prev = strNode;
 for(i=2; i<=numOfNodes; i++)
 {
 newnode = (struct node *)malloc(sizeof(struct node));
 printf(" Input data for node %d : ", i);
 scanf("%d", &num);
 newnode->num = num;
 newnode->next = NULL;
 prev->next = newnode;
 prev = newnode;
 }
 prev->next = strNode;
 }
}
void display(){
 struct node *temp;
 int n = 1;
Output:
if(strNode == NULL)
 {
 printf(" No data found in the List yet.");
 }
 else
 {
 temp = strNode;
 printf("\n\n Data entered in the list are :\n");
 do {
 printf(" Data %d = %d\n", n, temp->num);
 temp = temp->next;
 n++;
 }while(temp != strNode);
 }
}

