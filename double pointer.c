/*Program to demonstrate double pointers*/

#include <stdio.h>

int main(void) {

 int  a=10; // declaring the variable
 int *p;  // declaring the pointer variable
int **q;  // declaring the double pointer variable
  p=&a;   // iniatialising the pointer variables
  q=&p;   
  printf("%d\n",a);  // display the variable a
  printf("%d\n",*p); // display the contents of pointer variables
  printf("%d\n",**q);
}