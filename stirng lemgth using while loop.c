/* Program to calculate String length using while loop */

#include <stdio.h>

int main(void) {  // start of main

  char str[100];  // declaring a character array of size 100
  int i; // declaring a integer variable i

  printf("enter the string:\t");   // taking input from the user
  scanf("%s",str); // storing the string in a variable str

  i = 0; // initialize i to 0
  while(str[i]!='\0'){  // commparing the string element
    i++;
  }
  printf("length of the string is %d",i);
}