/*Program to demonstrate double pointers*/

#include <stdio.h>

int main(void) {
 int  a=10;
 int *p;
int **q;
  p=&a;
  q=&p;
  printf("%d\n",a);
  printf("%d\n",*p);
  printf("%d\n",**q);
}