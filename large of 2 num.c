/*Program to find largest of two numbers */

#include <stdio.h>

int main(void) {  // start of main

  int a,b,big;  // declaring the required variables

  printf("enter two numbers:\n");
  scanf("%d%d,&a,&b");
  big =a;
  if(b>big)
  {
    big=b;
  }
  printf("the biggest number is %d\n",big);
}