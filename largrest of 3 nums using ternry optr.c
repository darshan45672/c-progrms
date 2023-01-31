/* Program to find largest of 3 numbers using ternary operators */

#include <stdio.h>

int main(void) {
//start of main

 int a,b,c,big;  // declaring the required variables

  printf("enter 3 numbers:\n");  // taking 3 numbers from the  user
  scanf("%d%d%d",&a,&b,&c);  // storing the user entered data in appropriate  variables

  big=a>b?(a>c?a:c):(b>c?b:c); // checking the biggest number using ternary operator / conditional operator and assigning the returned value to a variable named big

  printf("%d is the largest number",big); // display the value of big

 return 0; // end of main
             
}