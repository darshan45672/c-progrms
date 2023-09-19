/* Program to find length of a string using string built in functions */

#include <stdio.h>  // including headerfile that has basic input output functions
#include <string.h> // including headerfile that has basic string operation functions

int main(void) {

  char str[100];  // declaring the required chararcter array
  int length; //
  
  printf("enter the string:\n");  //
  scanf("%s",str);
  length=strlen(str);
  printf("length of the string is %d\n",length);
}