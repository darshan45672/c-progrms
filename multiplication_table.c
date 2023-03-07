/* Program to display multiplication table of the number which is entred by the user */

#include<stdio.h>

int main()
{

  int num; // declaring the required 
  printf("krupaya apka mann pasanda number likiye:");
  scanf("%d",&num);
  for(int i=1;i<=10;i++)
    {
      printf("%d X %d = %d\n",num,i,num*i);
    }
  return 0;
}