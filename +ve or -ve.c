/* program to find wether entered number is positive or negeative */

#include <stdio.h>

int main(void) {
  int num;
  printf("enter a number:\n");
  scanf("%d",&num);
  if(num==0){
    printf("\nthe value is equal to zero");
    }else if(num>0){
    printf("\nthe number is positive");
    }
  else {
    printf("\n the number is negative");
    }
    }