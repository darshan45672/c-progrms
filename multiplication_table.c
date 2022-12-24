/* Program to display multiplication */

#include<stdio.h>
int main()
{
  int num;
  printf("krupaya apka mann pasanda number likiye:");
  scanf("%d",&num);
  for(int i=1;i<=10;i++)
    {
      printf("%d X %d = %d\n",num,i,num*i);
    }
  return 0;
}