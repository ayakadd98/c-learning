#include <stdio.h>
#include <math.h>
int main() {
  float A,B;
  printf("This program swap Two Integers Without Using an Extra Variable and Display the Result\n");
  printf("please enter the first integer A:\n");
  scanf("%f",&A);
  printf("please enter the socond integer B:\n");
  scanf("%f",&B);
  A=A+B;
  B=A-B;
  A=A-B;
  printf("A= %.2f \n",A);
  printf("B= %.2f \n",B);
  return 0;
}
