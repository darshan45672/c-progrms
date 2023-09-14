/* Program to find area of a square using single variable */

#include <stdio.h>

//using single variable

int main(void) {
  //area of a square
 int side;
  printf("eneter the value of side of a square =");  //taking the user input
  scanf("%d",&side);     // storing the user given data in a variable named side
  printf("the area of a square is %d",side*side);    // displaying the calculated area using shortcut method in printf
  return 0;
  }
