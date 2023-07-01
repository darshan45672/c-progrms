//SGPA Calculator
#include <stdio.h>

int main(void) {  // start of main

  int sub1,sub2,sub3,sub4,sub5,sub6,sub7,sub8,sub9; // declare the required variables
  float SGPA=0;
  printf("enter the subject grades of SEM3\n");
  scanf("%d%d%d%d%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5,&sub6,&sub7,&sub8);
  SGPA=(sub1*3+sub2*4+sub3*1+sub4*4+sub5*3+sub6*1+sub7*1+sub8*1)/18.0;  //this caclculates based on your grade not marks
    
  printf("SGPA of SEM1 is %f",SGPA);
  
  return 0;
}