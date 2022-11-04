#include <stdio.h>
int bintodec(int n);
int main(void) {
  int n, res;
  printf("enter a binary number:");
  scanf("%d", &n);
  res = bintodec(n);
  printf("%d in binary=%d in decimal\n", n, res);
}
int bintodec(int n) {
  if (n == 0)
    return 0;
  else
    return (n % 10 + bintodec(n / 10) * 2);
}
