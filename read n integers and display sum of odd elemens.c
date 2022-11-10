#include <stdio.h>

int main(void) {
  int i, n, a[100], odd = 0;
  printf("enter the number of elements:\n");
  scanf("%d", &n);
  printf("enter %d elements:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n; i++) {
    if (a[i] % 2 == 1) {
      odd = odd + a[i];
    }
  }
  printf("sum of odd integers is %d\n", odd);
}