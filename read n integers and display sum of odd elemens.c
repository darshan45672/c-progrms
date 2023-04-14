/* Program to read n numbers from the user and calculate the sum of odd numbers upto n */

#include <stdio.h>

int main(void) {

  int i, n, a[100], odd = 0;  // declaring the required variables

  printf("enter the number of elements:\n"); // taking number of elements as a input from the user
  scanf("%d", &n);  // storing the user entered number in a variable

  printf("enter %d elements:\n", n); // taking the elements from the user

  for (i = 0; i < n; i++) {  // start of for loop
    scanf("%d", &a[i]); // storing the user entered number in a array 
  } // end 
  for (i = 0; i < n; i++) {
    if (a[i] % 2 == 1) {
      odd = odd + a[i];
    }
  }
  printf("sum of odd integers is %d\n", odd);
}