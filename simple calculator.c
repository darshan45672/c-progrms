#include <stdio.h>

int main(void) {
  int num1, num2, res;
  char op;
  printf("\nenter a valid artematic expression:\n");
  scanf("%d%c%d", &num1, &op, &num2);
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