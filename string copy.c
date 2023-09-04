/* Program to copy string from one source to a destination */

#include <stdio.h>  // including the basic header file
#include<string.h>  // including the header file for string operattions

int main(void) {
  char src[100],cpy[100];
  printf("enter the string to b copied:\t");
  scanf("%s",src);
  strcpy(cpy,src);
  printf("copied sting is %s\n",cpy);
}