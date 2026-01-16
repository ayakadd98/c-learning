#include <stdio.h> 
int main() { 
  float Width,Length,Area,Perimeter;
  printf("this program for calculate the Area and the Perimeter of a rectangle \n");
  printf("please enter the Width \n");
  scanf("%f",& Width);
  printf("please enter the Length \n");
  scanf("%f",& Length);
  Area=Width*Length;
  Perimeter=(Width+Length)*2;
  printf("the area is :%.2f \n",Area);
  printf("the Perimeter is :%.2f \n",Perimeter);
  return 0;
}
