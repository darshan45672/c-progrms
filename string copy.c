/* Program to copy string from one source to a  */

#include <stdio.h>
#include<string.h>
int main(void) {
  char src[100],cpy[100];
  printf("enter the string to b copied:\t");
  scanf("%s",src);
  strcpy(cpy,src);
  printf("copied sting is %s\n",cpy);
}