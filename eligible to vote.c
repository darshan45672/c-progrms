/*Program to display whether a person is eligible to vote by taing his age as parametre*/

#include <stdio.h>

int main(void) {
 int age;
  printf("enter the age:\n");
  scanf("%d",&age);
  if(age>=18)
  {
    printf("you are eligible to vote!\n");
  }
  else
  {
    printf("SORRY!\nyou are not eligible to vote!");
  }
}