/* Program to perform linear search on integers */

#include <stdio.h>

int main(void) {
  // start of main

  int a[100], i, n, key;  // declaring the required variable

  printf("enter numbers of elemnts:");   //  taking input from the user
  scanf("%d", &n);   // storing the data in a variable 

  printf("\nenter %d elements\n", n);   
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);          // taking user entered numbers and stroing it in a array
  }
  
  printf("enter the element to be searched:\n");  // asking the user to enter the element to be searched
  scanf("%d", &key);  // storing the user entered data in a variable 

  for (i = 0; i < n; i++) {
    if (a[i] == key) {   // checking the wether the key is equal to element in that array and if true display the message
      printf("search sucessful!\n",
             key, a[i]);
      exit(0);
    } 
  } // end of for loop

  printf("search unsucessful!\n element %d is not found in the given list!\n",  key);  // if not found in the list display key not found

 return 0;  // end of main


}