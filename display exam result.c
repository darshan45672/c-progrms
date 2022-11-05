#include <stdio.h>

int main(void) {
  int marks;
  printf("\n enter the marks obtianed:\n");
  scanf("%d",&marks);
  if(marks>=75){
    printf("\n DISTINCTION");
    }
  else if(marks>=60&&marks<75){
    printf("\n FIRST CLASS!");
    }
  else if(marks>=50&&marks<60){
    printf("SECOND CLASS!");
    }
  else if (marks>=40&&marks<50)
  {
    printf("PASS!");
  }
  else{
    printf("\n FAIL!");
  }
}