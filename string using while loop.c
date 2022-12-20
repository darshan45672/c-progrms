/* Program to copy a string from source to destination and display the number of characters copied from that string */

#include <stdio.h>

int main(void) {
char src[100],cpy[100];
  int i;
  printf("enter the string:\t\n");
  scanf("%s",src);
  i=0;
  while(src[i]!='\0'){
    cpy[i]=src[i];
    i++;
  }cpy[i]!='\0';
  printf("copied string is %s\n",cpy);
  printf("no of copied characters from the string is %d\n",i);
}