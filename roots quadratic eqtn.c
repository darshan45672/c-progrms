/* Program to find roots of a  */

#include <math.h>
#include <stdio.h>
int main(void) {
  float a, b, c, d, real, img, root1, root2;
  printf("enter the coeffient af a,b,c:\n");
  scanf("%f%f%f", &a, &b, &c);
  if (a == 0 && b == 0) {
    printf("soory!\n roots cannot be computed\n");
    exit(0);
  }
  if (a == 0) {
    printf("roots are linear\n");
    root1 = -c / b;
    printf("root=%f\n", root1);
    exit(0);
  }
  d = b * b - 4 * a * c;
  if (d == 0) {
    root1 = -b / (c * a);
    printf("roots are real and equal\n root1=root2=%f", root1);
  } else if (d > 0) {
    root1 = (-b + sqrt(d)) / (2 * a);
    root2 = (-b - sqrt(d)) / (2 * a);
    printf("roots are real and distinct\n root1=%f\n root2=%f\n", root1, root2);
  } else {
    printf("roots are complex/imaginary\n");
    real = -b / (2 * a);
    img = sqrt(fabs(d)) / (2 * a);
    printf("root1=%f + i%f\n", real, img);
    printf("root2=%f - i%f\n", real, img);
  }
}