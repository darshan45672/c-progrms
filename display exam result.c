/* Program to display exam result */

#include <stdio.h>

int main(void) {


  int marks; // declaring required variables

  printf("\n enter the marks obtianed:\n"); // taking input from the user
  scanf("%d",&marks); // storing the entered data in a variable in a variable named marks

  if(marks>=75){              // checking wether the marks is greater than 75 using if-else ladder
    printf("\n DISTINCTION");
    }
  else if(marks>=60&&marks<75){
    printf("\n FIRST CLASS!");
    }
  else if(marks>=50&&marks<60){
    printf("SECOND CLASS!");
    }
  else if (marks>=40&&marks<50)
  {
    printf("PASS!");
  }
  else{
    printf("\n FAIL!");
  }            // end of if - else ladder

}