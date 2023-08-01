/* Program to calculate String length using while loop */

#include <stdio.h>

int main(void) {  // start of main

  char str[100];  // declaring a character array
  int i;
  printf("enter the string:\t");
  scanf("%s",str);
  i=0;
  while(str[i]!='\0'){
    i++;
  }
  printf("length of the string is %d",i);
}