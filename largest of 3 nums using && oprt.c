/* Program to find largest*/

#include <stdio.h>

int main(void) {
  int num1,num2,num3;
  printf("\nenter the first number:");
  scanf("%d",&num1);
  printf("\n enter the second number:");
  scanf("%d",&num2);
  printf("\n enter the third number:");
  scanf("%d",&num3);
  if(num1>num2&&num1>num3){
    printf("\n %d is the largest number!",num1);
    }
    else if(num2>num1&&num2>num3){
    printf("\n %d is the largest number!");
    }
  else{
    printf("\n %d is the largest number!");
  }
}