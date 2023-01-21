/*Program to check wether the number is even or  odd using simple if-else */

#include <stdio.h>

int main(void) {

  int num,rem; // declaring the rquired variables

  printf("\n enter the number(1-50):\n"); // taking input from the user
  scanf("%d",&num);  // storing the user entered data in variable num

  rem=num%2;  // performing modulo operation with 2
  switch(rem) {  // switching the rem
      case 0: printf("\n even!");
        break;
      case 1: printf("\n odd");
        break;
    }
}