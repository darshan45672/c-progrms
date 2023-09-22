/* Program to find length of a string using string built in functions */

#include <stdio.h>  // including headerfile that has basic input output functions
#include <string.h> // including headerfile that has basic string operation functions

int main(void) {

  char str[100];  // declaring the required chararcter array
  int length; //  declaring a variable for length
  
  printf("enter the string:\n");  //  taking input from the user
  scanf("%s",str);  //  storing the user entered data in a variable str

  length = strlen(str); //

  printf("length of the string is %d\n",length);  //
  
}