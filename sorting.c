/* Program  to implement sorting on integers, This program sorts the integers taken by the user in ascending order */

#include <stdio.h>

int main(void) {  // start of main

  int a[50], n, i, j, temp;   // declaring the required variables

  printf("enter the number of elements\n");   // taking number of elements as input from the user
  scanf("%d", &n);  // storing the user entered data in a variable n

  printf("enter %d elements\n",n);   // taking n elements from the user
  for (i = 0; i < n; i++) { // scanning each data using a loop
    scanf("%d\t", a[i]);  // storing the elements in respective array indices
  }

  for (i = 1; i < n; i++) {  // starting a loop
    for (j = 0; j < n - i; i++) { // starting a 2nd loop

      if (a[j] > a[j + 1]) {   // comapring the 2 adjacent elements

        temp = a[j];  // swapping the elements using temp variable
        a[j] = a[j + 1];   // storing the data of next index in current index
        a[j + 1] = temp;  // storing the data of temp in next index
      }
    }
  } // end of for loop

  /* diplaying the sorted elements */
  printf("the sorted elements are\n");

  for (i = 0; i < n; i++) {
    printf("%d\t", a[i]);   // displaying all the elements present in the index
  }
  printf("\n"); // come to new line

 return 0; // end of main
 
}