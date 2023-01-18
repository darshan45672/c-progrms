/* Program to display even and odd numbers between m and n*/

#include <stdio.h>

int main(void) {

 int m,n,i; // declaring the required variables 

  printf("enter the value of m and n:\n"); // taking input from the user

  scanf("%d%d",&m,&n); // storing the  user input in a variable

  printf("here's your result!\n");   // display the result
  for(i=m;i<=n;i++){
      if(i%2==0){
        printf("%d is even\n",i);
      }
      else{
        printf("%d is odd\n",i);
      }
    }
}