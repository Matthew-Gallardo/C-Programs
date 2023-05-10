#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

	struct node *addNode(struct node *, int);
	struct node *create(struct node *, int);

	void print(struct node *);
	struct node *reverse (struct node *);
	struct node *push (struct node *, int);
	struct node *addition (struct node *, struct node *);
int main(){
	int val1,val2;
	printf("Enter two numbers: ");
	scanf("%d%d", &val1,&val2);

	printf("First Number:\n");
	struct node *head_1 = NULL;
	head_1 = create(head_1, val1);
	print(head_1);

	printf("\nSecond Number:\n");
	struct node *head_2 = NULL;
	head_2 = create(head_2,val2);
	print(head_2);

	struct node *head_3 = NULL;
	head_3 = addition(head_1,head_2);
	printf("\nSum:\n");
	print(head_3);
}
struct node *addNode(struct node *head, int num){
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data=num;
	new_node->next=NULL;
	new_node->next=head;
	head=new_node;
	return head;
}
struct node *create(struct node *head, int num){
	while(num!=0){
	head=addNode(head,num%10);
	num=num/10;
	}
	return head;
}
void print(struct node *head){
	struct node *temp = head;
	if(head==NULL){
	printf("---List empty---");
	}
	else{
		while(temp->next != NULL){
		printf("%d <- ",temp->data);
		temp = temp->next;
		}
	}
}
struct node*reverse(struct node *head){
	if(head==NULL)
	return head;

	struct node *current = NULL;
	struct node *next = head->next;
	head->next = NULL;

	while(next != NULL){
		current = next;
		next = next->next;
		current->next=head;
		head=current;
 	}
	return head;
}
struct node *push(struct node *head,int num){
	struct node *new_ptr = (struct node*)malloc(sizeof(struct node));
	new_ptr->data=num;
	new_ptr->next=head;

	head = new_ptr;
	return head;
}
struct node *addition(struct node *head_1, struct node *head_2){
	struct node *ptr_1 = head_1;
	struct node *ptr_2 = head_2;
	struct node *head_3 = NULL;
	int carry=0,sum;

	while(ptr_1||ptr_2){
		sum=0;
		if(ptr_1)
		sum+=ptr_1->data;
		if(ptr_2)
		sum+=ptr_2->data;

		sum+=carry;
		carry = sum/10;
		sum=sum%10;
		head_3 = push(head_3, sum);

		if(ptr_1)
		ptr_1 = ptr_1->next;
		if(ptr_2)
		ptr_2 = ptr_2->next;
 }
	if(carry)
	head_3 = push(head_3,carry);
	return head_3;
}
