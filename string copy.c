/* Program to copy string from one source to a destination */

#include <stdio.h>  // including the basic header file
#include<string.h>  // including the header file for string operattions

int main(void) {  // start of main

  char src[100],cpy[100]; // declare the required arrays

  printf("enter the string to b copied:\t");  // taking input from the user
  scanf("%s",src);  //  storing the data in a variable named src

  strcpy(cpy,src);  //  copying the string from the source to 
  
  printf("copied sting is %s\n",cpy);
}