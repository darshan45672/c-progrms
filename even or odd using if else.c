#include <stdio.h>

int main(void) {
  int num,rem;
  printf("\n enter the number(1-50):\n");
  scanf("%d",&num);
  rem=num%2;
  switch(rem)
    {
      case 0: printf("\n even!");
      break;
      case 1: printf("\n odd");
      break;
    }
}