/*Program to find largest of two numbers */

#include <stdio.h>

int main(void) {  // start of main

  int a,b,big;  // declaring the required variables

  printf("enter two numbers:\n");  // taking user input
  scanf("%d%d,&a,&b");  // storing the user entered  data in a variable
  
  big =a;
  if(b>big)
  {
    big=b;
  }
  printf("the biggest number is %d\n",big);
}