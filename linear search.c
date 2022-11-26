/* Program to perform linear search on */

#include <stdio.h>

int main(void) {
  int a[100], i, n, key;
  printf("enter numbers of elemnts:");
  scanf("%d", &n);
  printf("\nenter %d elements\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  printf("enter the element to be searched:\n");
  scanf("%d", &key);
  for (i = 0; i < n; i++) {
    if (a[i] == key) {
      printf("search sucessful!\n",
             key, a[i]);
      exit(0);
    }
  }
  printf("search unsucessful!\n element %d is not found in the given list!\n",
         key);
}