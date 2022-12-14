/* Program to compare two strings entered by the user using while loop */

#include <stdio.h>

int main(void) {
  char str1[100], str2[100];
  int i, length1, length2;
  printf("enter the first string\n");
  scanf("%s", str1);
  printf("enter the second string\n");
  scanf("%s", str2);
  length1 = strlen(str1);
  length2 = strlen(str2);
  if (length1 != length2) {
    printf("string 1 is not equal to string 2\n");
  } else {
    i = 0;
    while (str1[i] != '\0') {
      if (str1[i] != str2[i]) {
        printf("string 1 is not equal to string 2\n");
        exit(0);
      } else {
        i++;
      }
    }
    printf("strings are equal\n");
  }
}