/*Program to display numbersbetween m and n */

#include <stdio.h>

int main(void) {

  int m, n, i;  // declaring the required  varaibles

  /* Taking the user input and storing it in a variable */
  printf("enter the value of m:\n"); 
  scanf("%d", &m);
  printf("enter the value of n:\n");
  scanf("%d", &n);

  for (i = m; i <= n; i++) {
    printf("\t%d", i);
  }
}