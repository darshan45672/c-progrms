/* Program to find */

#include <stdio.h>

int main(void) {
 int a,b,c,big;
  printf("enter 3 numbers:\n");
  scanf("%d%d%d",&a,&b,&c);
  big=a>b?(a>c?a:c):(b>c?b:c);
  printf("%d is the largest number",big);
}