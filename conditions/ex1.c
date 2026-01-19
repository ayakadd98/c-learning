#include <stdio.h>
int main() {
  int a,b;
  printf("Program to Check Whether Two Integers Have the Same Sign. \n");
  printf("please enter the first number:\n");
  scanf("%d",&a);
  printf("please enter the second number:\n");
  scanf("%d",&b);
 if(a*b<0)
  printf(" They do not have the same sign \n");
  else if(a*b>0)
  printf(" they have the same sign \n");
  else
  printf("one of the two numbers is zero ");
  return 0;
}
