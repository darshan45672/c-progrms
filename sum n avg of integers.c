/* Program to find the sum and average of integers */

#include <stdio.h> // including all the basic functions in this header file

int main(void) {  // start of main

  int a[10], i, n, sum = 0; // declaring the required variables
  float avg; // declaring the floating variables
  
  printf("enter the numbers of elemenst:\n");
  scanf("%d", &n);
  printf("enter %d elements:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n; i++) {
    sum = sum + a[i];
  }
  avg = sum / n;
  printf("sum is %d\n", sum);
  printf("average is %f\n", avg);
}