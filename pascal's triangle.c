/* Program to create a pascal's triangle taking number of rows as input from the user*/

#include <stdio.h>

int main(void) {
  // start of main

  int rows, coef = 1, space, i, j; // declaring the required variables

  printf("enter the rows:\n"); // taking input from the user
  scanf("%d", &rows);
  for (i = 0; i < rows; i++) {
    for (space = 1; space <= rows - i; space++) {
      printf(" ");
    }
    for (j = 0; j <= i; j++) {
      if (j == 0 || i == 0) {
        coef = 1;
      } else {
        coef = coef * (i - j + 1) / j;
      }
      printf("%4d", coef);
    }
    printf("\n");
  }
}