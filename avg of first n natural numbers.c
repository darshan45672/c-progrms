/* Program to find average of first n natural numbers */

#include <stdio.h>

int main(void) {
  int n, i, sum = 0;   // daclaring variables and initialising sum = 0 
  float avg = 0.0;      // declaring average as float because result of division might be of datatype flaot
  printf("enter the value of n:\n");    // taking the user input
  scanf("%d", &n);
  i = 1;       
  do {
    sum = sum + i;
    i++;
  } while (i <= n);
  avg = sum / n;
  printf("\n the sum of first %d natural numbers = %d\n the average of first "
         "%d natural numbers is = %f\n",
         n, sum, n, avg);
}