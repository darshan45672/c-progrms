/* Program to concatenate two strings using string built-in  functions */

#include <stdio.h>  // include basic functions
#include <string.h> // library that has string functions


int main(void) {  // start of main

  char s1[20], s2[20];  // declare the required arrays
  int n;
  printf("enter the first string:\n");
  gets(s1);
  printf("enter the second string:\n");
  gets(s2);
  printf("enter n:\n");
  scanf("%d", &n);
  strncat(s1, s2, n);
  printf("the conctanated sting is\n");
  puts(s1);
}