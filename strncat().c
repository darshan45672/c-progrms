/* Program to concatenate two strings using string built-in functions */

#include <stdio.h>  // include basic functions
#include <string.h> // library that has string functions

int main(void) {  // start of main

  char s1[20], s2[20];  // declare the required arrays
  int n;  // declaring a variable

  printf("enter the first string:\n");  // taking input from the user
  gets(s1); // reading string 
  printf("enter the second string:\n");   // taking 2nd input from the user
  gets(s2); // reading string

  printf("enter n:\n"); // taking the length of string
  scanf("%d", &n);  // storing the data in a variable 
  strncat(s1, s2, n); // concatating 

  printf("the conctanated sting is\n");  // DISPLAY THE MESSAGE
  puts(s1); // display the concatenated string

 return 0;  // end of main

}