/* Program to sum of */

#include <stdio.h>

int main(void) {
  int n,m,sum=0;
  printf("\n enter the value of m:");
  scanf("%d",&n);
  while(m<=n)
    {
      sum=sum+m;
      m=m+1;
    }
  printf("\n sum= %d",sum);
}