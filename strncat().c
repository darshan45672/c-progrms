/* Program to concatenate two strings using string built-in  functions */

#include <stdio.h>  // include basic functions
#include <string.h> // library that has string functions

int main(void) {  // start of main

  char s1[20], s2[20];  // declare the required arrays
  int n;  // declaring a variable

  printf("enter the first string:\n");  // taking input from the user
  gets(s1); // reading string 
  printf("enter the second string:\n");   // taking 2nd input from the user
  gets(s2); // reading string

  printf("enter n:\n"); // taking 
  scanf("%d", &n);  //
  strncat(s1, s2, n); //

  printf("the conctanated sting is\n");  // 
  puts(s1); //

 return 0;  // end of main

}