/* Program to find reverse of a number entered by the user*/


#include <stdio.h>

int main(void) { // start of main

  int num, temp; // declaring the required varaibles

  printf("enter the number:\n"); // taking input from the user
  scanf("%d", &num); // storing the user entered data in a variabl
  printf("the reversed number is:\n");
  while (num != 0) {
    temp = num % 10;
    printf("%d", temp);
    num = num / 10;
  }
}