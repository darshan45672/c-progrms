#include <stdio.h>

int main(void) {
  int m, n, i;
  printf("enter the value of m:\n");
  scanf("%d", &m);
  printf("enter the value of n:\n");
  scanf("%d", &n);
  for (i = m; i <= n; i++) {
    printf("\t%d", i);
  }
}