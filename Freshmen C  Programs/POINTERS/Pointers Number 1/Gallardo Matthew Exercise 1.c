// GALLARDO MATTHEW BSCS 1-4    EXERCISE 1
#include<stdio.h>

int main(){

// CHOSEN THE LETTER M
char s = 'M';
int a = 8;
double b = 2.0;
char *c;
int *d;
double *x;
c = &s;
d = &a;
x = &b;

printf("The address of char s is 0x%x\n", &s);
printf("The address of int a is 0x%x\n", &a);
printf("The address of double b is 0x%x\n", &b);
printf("The address of char* c is 0x%x\n", c);
printf("The address of int *d is 0x%x\n", d);
printf("The address of double *x is 0x%x\n", x);

printf("\n");

printf("The value of char s is %c\n", s);
printf("The value of int a is %d\n", a);
printf("The value of double b is %lf\n", b);
printf("The value of char* c is %c\n", *c);
printf("The value of int *d is %d\n", *d);
printf("The value of double x is %lf\n", *x);

printf("\n");

printf("The size of char s is %u bytes\n", sizeof(s));
printf("The size of int a is %u bytes\n", sizeof(a));
printf("The size of double b is %u bytes\n", sizeof(b));
printf("The size of char* c is %u bytes\n", sizeof(*c));
printf("The size of int *d is %u bytes\n", sizeof(*d));
printf("The size of double *x is %u bytes\n", sizeof(*x));

}
