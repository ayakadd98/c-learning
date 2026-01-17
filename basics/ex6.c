#include <stdio.h>
#include <math.h>
int main() {
  float r,v;
  const float pi=3.14;
  printf("This program for calculate the volume of the sphere\n");
  printf("please enter the radius \n");
  scanf("%f",&r);
  v=(4*pi* pow(r,3))/3;
  printf("The volume of the sphere is :%.2f \n",v);
  return 0;
}
