/* Program to copy one string using pointers */

#include <stdio.h>

int main(void) {
  char str1[100],str2[100];  // declaring 2 char arrays 
  char *ptr1=str1;      // decalring and intialsing 2 pointers
  char *ptr2=str2;
  printf("enter string 1:\n");
  scanf("%s",str1);
  while(*ptr1!='\0'){
    *ptr2=*ptr1;
    ptr1++;
    ptr2++;
  }
  *ptr2='\0';
  printf("copied string is %s\n",str2);
}