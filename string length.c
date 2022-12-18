/* Program to find length of a string using string built in functions */

#include <stdio.h>
#include <string.h>
int main(void) {
  char str[100];
  int length;
  printf("enter the string:\n");
  scanf("%s",str);
  length=strlen(str);
  printf("length of the string is %d\n",length);
}