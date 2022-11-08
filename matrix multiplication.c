#include <stdio.h>

int main(void) {
  int a[50][50], b[50][50], c[50][50];
  int m, n, p, q, i, j, k;
  printf("enter the order of matrix A\n");
  scanf("%d%d", &m, &n);
  printf("enter the order of matrix B\n");
  scanf("%d%d", &p, &q);
  if (n != p) {
    printf("SORRY!\nmatrix multiplication is not posible\n");
  } else {
    printf("enter the elements of matrix A:\n");
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
        scanf("%d", &a[i][j]);
      }
    }
    printf("enter the elements of matrix B\n");
    for (i = 0; i < p; i++) {
      for (j = 0; j < q; j++) {
        scanf("%d", &b[i][j]);
      }
    }
    printf("matrix A is displayed as\n");
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
        printf("%d"
               "\t",
               a[i][j]);
      }
    }
    printf("\nmatrix B is displayed as\n");
    for (i = 0; i < p; i++) {
      for (j = 0; j < q; j++) {
        printf("%d\t", b[i][j]);
      }
    }
    printf("\nHERE'S YOUR MATRIX MULTIPLICATION\n");
    for (i = 0; i < m; i++) {
      for (j = 0; j < q; j++) {
        c[i][j] = 0;
        for (k = 0; k < n; k++) {
          c[i][j] = c[i][j] + a[i][k] * b[k][j];
        }
      }
    }
    printf("the resultant matrix is:\n");
    for (i = 0; i < m; i++) {
      for (j = 0; j < q; j++) {
        printf("%d\t", c[i][j]);
      }
      printf("\n");
    }
  }
}
