/*Program to find factorial of number using recursion*/

#include<stdio.h> 
int fact(int);
int main(void )
{
int n,res;
  printf("enter a number\n");
  scanf("%d",&n);
res=fact(n);
printf("factorial =%d",res); 
}
int fact(int n)
{
if(n==0)
return 1; 
else
return (n*fact(n-1));
  }