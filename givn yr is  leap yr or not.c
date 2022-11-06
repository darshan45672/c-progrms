#include <stdio.h>

int main(void) {
  int year;
  printf("enter a year:\n");
  scanf("%d", &year);
  if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))) {
    printf("\nLEAP YEAR!");
  } else {
    printf("\nnot a leap year");
  }
}