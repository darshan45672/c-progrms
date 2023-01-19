/*Program to display whether a person is eligible to vote by taing his age as parametre*/

#include <stdio.h>

int main(void) {

 int age;  // ddeclaring the required variable

  printf("enter the age:\n"); // taking input from the user
  scanf("%d",&age); // storing the user entered data in a variable

  if(age>=18){  //checkong wether age is greater than or equal to 18  if true display the relavent message
    printf("you are eligible to vote!\n");
  }
  else{   // if the above condition is false display the relavent message
    printf("SORRY!\nyou are not eligible to vote!");
  }

 return 0; // end of main
}