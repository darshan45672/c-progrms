/* Program to display the corresponding day to the entered number ( 1 - 7 ) */


#include <stdio.h>

int main(void) {
  int day;
  printf("\n enter the number from 1-7:");
  scanf("%d", &day);
  switch (day) {
  case 1:
    printf("\n SUNDAY!");
    break;
  case 2:
    printf("\n MONDAY!");
    break;
  case 3:
    printf("\n TUESDAY!");
    break;
  case 4:
    printf("\n WEDNESDAY");
    break;
  case 5:
    printf("THURSDAY!");
    break;
  case 6:
    printf("\n FRIDAY!");
    break;
  case 7:
    printf("\n SATURDAY!");
    break;
  default:
    printf("\n\t\t\tSORRY!\n please enter a number between 1-7");
  }
}