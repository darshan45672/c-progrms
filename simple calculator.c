/* Program to stimulate simple calculator */

#include <stdio.h>

int main(void) {  //start of main

  int num1, num2, res; // declaring the required variables
  char op;

  /* taking input from the user */
  printf("\nEnter a valid artematic expression:\n"); // asking user to enter a valid arthematic expression
  scanf("%d%c%d", &num1, &op, &num2); // storing the user entered data in thier respective variable
  
  switch (op) {
  case '+':
    res = num1 + num2;
    printf("\nsum=%d", res);
    break;
  case '-':
    res = num1 - num2;
    printf("\ndifference=%d", res);
    break;
  case '*':
    res = num1 * num2;
    printf("\nproduct=%d", res);
    break;
  case '/':
    if (num2 == 0) {
      printf("\nreault is not defined!");
    } else
    {
      res = num1 / num2;
      printf("\nquotient=%d", res);
    }
  }
}