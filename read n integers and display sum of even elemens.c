/* Program to read n elements from the user and display the sum of all even numbers from 0 to n */

#include <stdio.h>

int main(void) { // start of main

  int i, n, a[100], even = 0; // declaring the required variables

  printf("enter the no. of elements\n"); // taking input from the user
  scanf("%d", &n); // storing the user entered data in respective variable

  printf("enter %d elements:\n", n); // taking the elements to the array from the user using loop 
  for (i = 0; i < n; i++) { // start of loop
    scanf("%d", &a[i]); // staoring the user entered element in its respective index
  } // end of loop

  /* Checking wether the element stored in the array is even or odd */
  for (i = 0; i < n; i++) {
    if (a[i] % 2 == 0) { // if even then add
      even = even + a[i]; // adding the even numbers
    }
  } // end of loop

  printf("sum of even integers is %d\n", even); // displaying  the sum of even numbers in user given array

 return 0;
 
}