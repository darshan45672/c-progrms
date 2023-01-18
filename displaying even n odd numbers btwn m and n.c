/* Program to display even and odd numbers between m and n*/

#include <stdio.h>

int main(void) {

 int m,n,i; // declaring the required variables 

  printf("enter the value of m and n:\n"); // taking input from the user

  scanf("%d%d",&m,&n); // storing the  user input in a variable

  printf("here's your result!\n");   // display the result
  for(i=m;i<=n;i++){
      if(i%2==0){   // checking the codition for the number to be even and display the relavent message 
        printf("%d is even\n",i);
      }
      else{        // otherwise its a odd number and display the relavent message
        printf("%d is odd\n",i);
      }
    } // exit the loop

    return 0;  // end of main
}