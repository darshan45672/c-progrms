/* Program to perform string concatination using string built in functions */

#include <stdio.h>

int main(void) {
  char s1[100],s2[100];
  printf("enter the first string:\t");
  scanf("%s",s1);
  printf("\nenter the second string:\t");
  scanf("%s",s2);
  strcat(s1,s2);
  printf("\nthe concatenated string is %s\n",s1);
}