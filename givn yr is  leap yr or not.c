/*Program to determine wether entered year is leap year or not*/

#include <stdio.h>

int main(void) {

  int year; // declaring the required variables
  
  printf("enter a year:\n");
  scanf("%d", &year);
  if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))) {
    printf("\nLEAP YEAR!");
  } else {
    printf("\nnot a leap year");
  }
}