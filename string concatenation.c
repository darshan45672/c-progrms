/* Program to perform string concatination using string built in functions */

#include <stdio.h>

int main(void) {  // start of main

  char s1[100],s2[100];   // declare the required variables
  
  printf("enter the first string:\t");  // taking input from the user
  scanf("%s",s1); // storing the user entered data in s1
  
  printf("\nenter the second string:\t"); // taking input from the user
  scanf("%s",s2); //
  strcat(s1,s2);
  printf("\nthe concatenated string is %s\n",s1);
}