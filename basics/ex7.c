#include <stdio.h>
#include <math.h>
int main() {
  float A,B,C;
  printf("This program swap Two Integers Entered by the User and Display the Result\n");
  printf("please enter the first integer A:\n");
  scanf("%f",&A);
  printf("please enter the socond integer B:\n");
  scanf("%f",&B);
  C=A;
  A=B;
  B=C;
  printf("A= %.2f \n",A);
  printf("B= %.2f \n",B);
  return 0;
}
