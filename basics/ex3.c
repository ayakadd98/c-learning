#include <stdio.h> 
#include <math.h> 
int main() { 
  float x,d,y;
 printf("this program asks the user to enter two real numbers X and Y, and displays the power \n");
  printf("please enter x \n");
  scanf("%f",&x);
  printf("please enter y \n");
  scanf("%f",& y);
  d=pow(x,y);
  printf("the x power y is :%.2f \n",d);
  return 0;
}

