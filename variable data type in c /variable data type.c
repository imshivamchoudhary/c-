// Variables
//A name given to a memory location
//declared by writing ----> int a,b,c;
#include <stdio.h>
int main() {
  int a,b,c;
 printf("Enter a number: ");
 scanf("%d", &a);
 printf("Enter a number: ");
 scanf("%d", &b);
 printf("The value of a is %d\n", a);
 c=a+b;
 printf("the sum is %d\n", c);
}