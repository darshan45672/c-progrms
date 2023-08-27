/* Program to concatenate two strings using string built-in  functions */

#include <stdio.h>

#include <string.h>
int main(void) {
  char s1[20], s2[20];
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