/*Program to find factorial of number using recursion*/

#include<stdio.h> 

int fact(int); // declaring  a user defined function 
int main(void )
{
int n,res; // declaring the required variables
  printf("enter a number\n");  // taling input from the user
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