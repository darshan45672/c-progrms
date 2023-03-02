/* Program to perform Matrix Subraction */

#include <stdio.h>

int main(void) {  // start of main 

  int a[50][50], b[50][50], c[50][50]; // declaring the required array variables

  int  i, j, m, n, p, q; // declaring the required variable

  /* taking data ( input ) from the user */

  printf("enter the order of matrix A:\n"); // taking order for matrix A
  scanf("%d%d", &m, &n); // storing the order entered by the user in respective variables

  printf("enter the order of matrix B:\n");  // taking order for matrix B
  scanf("%d%d", &p, &q); // storing the order entered by the user in respective variables

  if (m != p || n != q) {  // checking the base condition to perform matrix multiplication
    printf("\t\tSORRy!\nmatrix addition not possible!\n");
    exit(0);
  } else {
    /* taking elements for matrix A */
    printf("enter the elements for matrix A:\n");
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
        scanf("%d", &a[i][j]); // storing the user entered elements in their respective variable index 
      }
    }

    /* taking elements for matrix B */
    printf("enter the elements for matrix B:\n");
    for (i = 0; i < p; i++) {
      for (j = 0; j < q; j++) {
        scanf("%d", &b[i][j]);  // storing the user entered elements in their respective variable index
      }
    }

    /* Displaying the matrices entered by the user */
    
    printf("matrix A is displayed as:\n");
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
        printf("%d\t", a[i][j]);    // displaying the vlaues that are stored in
      }
      printf("\n");
    }
    printf("\nmatrix B is displayed as:\n");
    for (i = 0; i < p; i++) {
      for (j = 0; j < q; j++) {
        printf("%d\t", b[i][j]);
      }
      printf("\n");
    }
    printf("\nhere's ur result\nMATRIX ADDITION\n");
    c[i][j] = 0;
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
        c[i][j] = a[i][j] - b[i][j];
      }
    }
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
        printf("%d\t", c[i][j]);
      }
       printf("\n");
    }
  }
}