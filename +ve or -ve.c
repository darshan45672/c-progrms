/* program to find wether entered number is positive or negeative */

#include <stdio.h>

int main(void) {
  int num;
  printf("enter a number:\n");    // taking input from the user
  scanf("%d",&num);
  if(num==0){                   //checking wether the number entered by  the user is equal to 0 or not
    printf("\nthe value is equal to zero");
    }else if(num>0){                                  // checking if the number is greater than 0 if not then else part will be execute
    printf("\nthe number is positive");
    }
  else {
    printf("\n the number is negative");
    }
    }