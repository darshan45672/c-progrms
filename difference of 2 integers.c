/* Program to find difference of 2 integers */

#include <stdio.h>

int main(void) {

 int a,b,res;  // declaring variables

  printf("enter the values of a and b:\n");  // asking the user to enter the values
  scanf("%d%d",&a,&b); // storing the entered values
  res=a-b;
  printf("difference of two numbers is %d",res);
}
