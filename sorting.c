/* Program  to implement sorting  */

#include <stdio.h>

int main(void) {
  int a[50], n, i, j, temp;
  printf("enter the number of elements\n");
  scanf("%d", &n);
  printf("enter %d elements\n",n);
  for (i = 0; i < n; i++) {
    printf("%\t", a[i]);
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