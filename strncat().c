/* Program to concatenate two strings using string built-in  functions */

#include <stdio.h>  // include basic functions
#include <string.h> // library that has string functions


int main(void) {  // start of main

  char s1[20], s2[20];  // declare the required arrays
  int n;  // declaring a variable

  printf("enter the first string:\n");  // taking input from the user
  gets(s1); // reading 
  printf("enter the second string:\n");
  gets(s2);
  printf("enter n:\n");
  scanf("%d", &n);
  strncat(s1, s2, n);
  printf("the conctanated sting is\n");
  puts(s1);
}