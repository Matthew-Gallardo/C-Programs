#include <stdio.h>
#include <stdlib.h>

int isPrime (int);
int main()
{
    int num;

    printf("Enter positive number\n");
    scanf ("%d", &num);

    printf ("Value returned is %d.", isPrime (num));
    return 0;
}


int isPrime (int num) {
 int prime;
 for (int i=2; i< num; i++){
    if (num %i ==0) {
        prime=0;
        break;
    }
    else
        prime=1;
 }
 return prime;
}
