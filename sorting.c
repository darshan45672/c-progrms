/* Program  to implement sorting on integers, This program sorts the integers taken by the user in ascending order */

#include <stdio.h>

int main(void) {  // start of main

  int a[50], n, i, j, temp;   // declaring the required variables

  printf("enter the number of elements\n");   // taking number of elements as input from the user
  scanf("%d", &n);  // storing the user entered data in a variable n

  printf("enter %d elements\n",n);   //
  for (i = 0; i < n; i++) {
    scanf("%d\t", a[i]);
  }
  for (i = 1; i < n; i++) {
    for (j = 0; j < n - i; i++) {
      if (a[j] > a[j + 1]) {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
  printf("the sorted elements are\n");
  for (i = 0; i < n; i++) {
    printf("%d\t", a[i]);
  }
  printf("\n");
}