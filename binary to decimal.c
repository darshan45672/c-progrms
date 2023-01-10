/* Program to convert binary number to decimal number  */

#include <stdio.h>
int bintodec(int n);
int main(void) {
  int n, res;
  printf("enter a binary number:");  // taking the input from the user
  scanf("%d", &n);   // storing the user entered data in a variable named n 
  res = bintodec(n);   // calling the function bintodec and assigneing the returned value in a variable res
  printf("%d in binary=%d in decimal\n", n, res);  // displaying the resultant 
}
 
 // defining the function bintodec
int bintodec(int n) {
  if (n == 0)  // checking if n = 0
    return 0;  // if true it'll return 0
  else
    return (n % 10 + bintodec(n / 10) * 2);  //else it'll return the computed value
}
