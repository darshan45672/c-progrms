/* Program to perform Matrix Multiplication*/

#include <stdio.h>

int main(void) {
  // start of main

  int a[50][50], b[50][50], c[50][50];  // declaring the required array variables

  int m, n, p, q, i, j, k; // declaring the required variables

  /* taking input from the user*/

  printf("enter the order of matrix A\n"); // asking the user to enter the order of matrix A 
  scanf("%d%d", &m, &n);  // storing the data in respective variables

  printf("enter the order of matrix B\n");  // asking the user to enter the order of matrix B
  scanf("%d%d", &p, &q);  // storing the data in respective variables

  if (n != p) {
    printf("SORRY!\nmatrix multiplication is not posible\n");  // checking the base condition required to perform multiplication of 2 matrixes if true display the appropriate messasge 
  }
  else {

    printf("enter the elements of matrix A:\n");  // take the elements for matrix A from the user 
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
        scanf("%d", &a[i][j]);
      }
    }
    printf("enter the elements of matrix B\n");  // taking the elements for matrix B from the user
    for (i = 0; i < p; i++) {
      for (j = 0; j < q; j++) {
        scanf("%d", &b[i][j]);
      }
    }

    /* Display both the matrices */ 

    printf("matrix A is displayed as\n");
    for (i = 0; i < m; i++) {  // displaying matrix A
      for (j = 0; j < n; j++) {
        printf("%d"
               "\t",
               a[i][j]);
      }
    }
    printf("\nmatrix B is displayed as\n");
    for (i = 0; i < p; i++) {  // displaying matrix B
      for (j = 0; j < q; j++) {
        printf("%d\t", b[i][j]);
      }
    }

    printf("\nHERE'S YOUR MATRIX MULTIPLICATION\n"); // performing matrix multiplication
    
    for (i = 0; i < m; i++) {
      for (j = 0; j < q; j++) {
        c[i][j] = 0;
        for (k = 0; k < n; k++) {
          c[i][j] = c[i][j] + a[i][k] * b[k][j];  // performing the computation
        }
      }
    }
    printf("the resultant matrix is:\n"); // displaying the resultant matrix
    for (i = 0; i < m; i++) {
      for (j = 0; j < q; j++) {
        printf("%d\t", c[i][j]);
      }
      printf("\n");
    }
  }
}
