/* Program to calculate String length using while loop */

#include <stdio.h>

int main(void) {
  char str[100];
  int i;
  printf("enter the string:\t");
  scanf("%s",str);
  i=0;
  while(str[i]!='\0'){
    i++;
  }
  printf("length of the string is %d",i);
}