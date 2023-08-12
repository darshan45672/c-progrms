/* Program to compare two strings entered by the user using while loop */

#include <stdio.h> // includimg the file that has basic functions

int main(void) {  // start of main

  char str1[100], str2[100];  // declaring 2 character arrays of size 100 

  int i, length1, length2;  // declaring the required variables

  /* Taking input from the user*/
  printf("enter the first string\n"); 
  scanf("%s", str1);
  printf("enter the second string\n");
  scanf("%s", str2);


  length1 = strlen(str1); // store the length of first string str1 in length1
  length2 = strlen(str2); // store the length of first string str1 in length1
  
  if (length1 != length2) {  // checkong if both the strings are not of same length 
    printf("string 1 is not equal to string 2\n");  // if true then display strings are not equal
  } 
  
  else {  // if not then proceed
    i = 0;
    while (str1[i] != '\0') {
      if (str1[i] != str2[i]) {
        printf("string 1 is not equal to string 2\n");
        exit(0);
      } else {
        i++;
      }
    }
    printf("strings are equal\n");
  }
}