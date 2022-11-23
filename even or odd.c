/*Program to determine even or odd*/

#include <stdio.h>

int main(void) {
  int n;
  printf("enter an integer:\n");
  scanf("%d",&n);
  if(n%2==0)
  {
    printf("%d is an even number!\n",n);
  }
  else
   {
      printf("%d is an odd number!\n",n);
   }
}