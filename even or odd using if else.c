/*Program to check wether the number is even or  odd using simple if-else */

#include <stdio.h>

int main(void) {

  int num,rem; // declaring the rquired variables

  printf("\n enter the number(1-50):\n"); // taking input from the user
  scanf("%d",&num);
  rem=num%2;
  switch(rem)
    {
      case 0: printf("\n even!");
      break;
      case 1: printf("\n odd");
      break;
    }
}