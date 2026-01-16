#include <stdio.h> 
#include <math.h> 
int main() { 
  float x,y,p,s,d,di;
 printf("this program asks the user to enter two real numbers X and Y, and calculate the sum , the product... \n");
  printf("please enter x \n");
  scanf("%f",&x);
  printf("please enter y \n");
  scanf("%f",& y);
  p=x*y;
  printf("the product is :%.2f \n",p);
  s=x+y;
  printf("the sum is :%.2f \n",s);
  d=x/y;
  printf("the division is :%.2f \n",d);
  di=x-y;
  printf("the difference is :%.2f \n",di);
  return 0;
}
