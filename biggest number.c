/* program to find biggest number in a array */

#include <stdio.h>

int main(void) {
  int i, n, a[100], big;
  printf("enter the number of elements:");    // taking user input
  scanf("%d", &n);                // storing it in a variable n of type integer      
  printf("enter %d elements:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);                // asking the user to enter n elemnts and storing the entered elements array
  }
  
  for (i = 0; i < n; i++) {
    big = a[0];        // initialising a[0] as big
    for (i = 0; i < n; i++) {
      if (a[i] > big) {         // checking wether the element at a[i] is big or not
        big = a[i];            // if true then a[i] is assigned as big
      }
    }
  } // end of for
  
  printf("biggest number is %d", big);  // displaying the value stored in big

}