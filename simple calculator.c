/* Program to stimulate simple calculator */

#include <stdio.h>

int main(void) {  //start of main

  int num1, num2, res; // declaring the required variables
  char op;

  /* taking input from the user */
  printf("\nEnter a valid artematic expression:\n"); // asking user to enter a valid arthematic expression
  scanf("%d%c%d", &num1, &op, &num2); // storing the user entered numbers and the operator in thier respective variable
  
  switch (op) { // switching the opertor

   case '+':  // if the operator is +
     res = num1 + num2; // if true then calculate the result
     printf("\nsum=%d", res); // displaying the calculated result
     break;

   case '-':  // if the operator is -
     res = num1 - num2; // if true then claculate the result
     printf("\ndifference = %d", res);  // diplay the calculated result
     break;

   case '*': // if the operator is *
     res = num1 * num2; // if true then calculate the result
     printf("\nproduct=%d", res); // display the calculated result
     break;

   case '/': // if the operator is /
     if (num2 == 0) {  // checking if num2 is 0 
       printf("\nreault is not defined!");
     } else{
       res = num1 / num2;
       printf("\nquotient=%d", res);
     }
     
  }
}