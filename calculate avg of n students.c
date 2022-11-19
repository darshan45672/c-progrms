/* program to read display and calculate the average marks of students
also to display students who scored above and average marks */

#include <stdio.h>
struct student {
  int marks, usn;
  char name[100];
};
int main() {
  int i, n;
  float sum = 0, avg;
  struct student s[100];
  printf("enter the number ofstudents\n");
  scanf("%d", &n);
  printf("enter the students detial:\nusn:\tname,\tmarks:\n");
  for (i = 0; i < n; i++) {
    scanf("%d%s%d", &s[i].usn, &s[i].name, &s[i].marks);
    sum = sum + s[i].marks;
  }
  avg = sum / n;
  printf("avg marks is %f", avg);
  printf("\nstudents scored above average marks:\n usn,\tname,\tmarks\n");
  for (i = 0; i < n; i++) {
    if (s[i].marks >= avg) {
      printf("%d\t%s\t%d\t", s[i].usn, s[i].name, s[i].marks);
    }
  }
  printf("\nstudents scored below avg marks:\n usn,\tname,\tmarks\n");
  for (i = 0; i < n; i++) {
    if (s[i].marks < avg) {
      printf("%d\t%s\t%d\n", s[i].usn, s[i].name, s[i].marks);
    }
  }
  return 0;
}