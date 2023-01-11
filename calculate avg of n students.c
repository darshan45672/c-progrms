/* program to read display and calculate the average marks of students
also to display students who scored above and average marks */

#include <stdio.h>
struct student {        // creating a structure named student
  int marks, usn;      // declaring the structure members 
  char name[100];
};

int main() {
  int i, n;          // declaring the variables and thier data types which are required to perform some required operations
  float sum = 0, avg;

  struct student s[100];    // declaring the structure variable for student

  printf("enter the number ofstudents\n");  // taking the number of students from the user
  scanf("%d", &n);  // storing the user give data in a variable named n

  printf("enter the students detial:\nusn:\tname,\tmarks:\n");    // asking the user to enter the respective student detials
  for (i = 0; i < n; i++) {
    scanf("%d%s%d", &s[i].usn, &s[i].name, &s[i].marks);
    sum = sum + s[i].marks;       // calculating the sum simultaneously
  }

  avg = sum / n;      // calculating the average after calculating the sum

  printf("avg marks is %f", avg);    // display average marks of the students

  printf("\nstudents scored above average marks:\n usn,\tname,\tmarks\n");      // display all the students who's score is greater than average marks
  for (i = 0; i < n; i++) {
    if (s[i].marks >= avg) {    // condition to check if the marks scored the respective student is greater  than average marks if it's true then display
      printf("%d\t%s\t%d\t", s[i].usn, s[i].name, s[i].marks);
    }
  }
  printf("\nstudents scored below avg marks:\n usn,\tname,\tmarks\n");        // display all the students who's score is less than average marks
  for (i = 0; i < n; i++) {
    if (s[i].marks < avg) {        // condition to check if the marks scored the respective student is less than average marks if it's true then display
      printf("%d\t%s\t%d\n", s[i].usn, s[i].name, s[i].marks);
    }
  }

  
  return 0;
}