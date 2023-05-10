#include<iostream>

using namespace std;

//node for list

struct node

{

int info;

struct node *next;

struct node *prev;

};

//class for link list

class IntList

{

public:

struct node *start;

//create node

void create_IntList(int value)

{

struct node *s, *temp;

temp = new(struct node);

temp->info = value;

temp->next = NULL;

if (start == NULL)

{

temp->prev = NULL;

start = temp;

}

else

{

s = start;

while (s->next != NULL)

s = s->next;

s->next = temp;

temp->prev = s;

}

}

//display in right order

void display_dIntList()

{

struct node *q;

if (start == NULL)

{

return;

}

q = start;

while (q != NULL)

{

cout<<q->info;

q = q->next;

}

}

//reverse the list

void reverse()

{

struct node *p1, *p2;

p1 = start;

p2 = p1->next;

p1->next = NULL;

p1->prev = p2;

while (p2 != NULL)

{

p2->prev = p2->next;

p2->next = p1;

p1 = p2;

p2 = p2->prev;

}

start = p1;

}

//display list in reverse order

void displayReverse(){

reverse();

display_dIntList();

reverse();

}

IntList()

{

start = NULL;

}

};

class HugeInt{

IntList d1,d2;

IntList resultList;

public:

HugeInt(IntList in_d1,IntList in_d2){

d1=in_d1;

d2 = in_d2;

}

void add(){

//reverse the list

d1.reverse();

d2.reverse();

struct node *q = d1.start;

struct node *r = d2.start;

int num1,num2,result,carry=0;

bool firstEmpty = false;

bool secondEmpty = false;

//loop until both lists are not empty

while(!firstEmpty || !secondEmpty){

num1=0;

num2=0;

if (d1.start == NULL)

{

firstEmpty = true;

}else{

if (q != NULL)

{

num1 =q->info;

q = q->next;

}else{

firstEmpty = true;

}

}

if (d2.start == NULL)

{

secondEmpty = true;

}else{

if (r != NULL)

{

num2 =r->info;

r = r->next;

}else{

secondEmpty = true;

}

}

//get result by add numbers + carry

result = num1+num2+carry;

carry =0;

//if result greater than 9 set carry to 1

if(result>9){

result = result-10;

carry = 1;

}

if(!firstEmpty || !secondEmpty || result!=0)

//store result in list

resultList.create_IntList(result);

}

//display the result

d1.displayReverse();

cout<<"+";

d2.displayReverse();

cout<<"=";

resultList.displayReverse();

}

};

int main(){

IntList dl;

IntList dl2;

int number,size;

cout<<"Enter size of first number : ";

cin>>size;

cout<<"Enter first number : ";

for(int i=1;i<=size;i++){

cin>>number;

dl.create_IntList(number);

}

cout<<"Enter size of second number : ";

cin>>size;

cout<<"Enter second number : ";

for(int i=1;i<=size;i++){

cin>>number;

dl2.create_IntList(number);

}

HugeInt hugeList(dl,dl2);

hugeList.add();

}


