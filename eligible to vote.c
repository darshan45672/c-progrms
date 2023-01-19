/*Program to display whether a person is eligible to vote by taing his age as parametre*/

#include <stdio.h>

int main(void) {

 int age;  // ddeclaring the required variable
 
  printf("enter the age:\n"); // taking input from the user
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