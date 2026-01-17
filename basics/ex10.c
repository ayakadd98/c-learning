#include <stdio.h>
#include <math.h>
int main() {
  int XB,YB,XA,YA;
  float D;
  printf("This program Calculate the distance between two points A and B \n");
  printf("please enter XA and YA:\n");
  scanf("%d %d",&XA,&YA);
  printf("please enter XB and YB:\n");
  scanf("%d %d",&XB,&YB);
  D=sqrt( pow(XB -XA,2)+pow(YB -YA,2));
  printf("the distance between A and B is : %.2f",D);
  return 0;
}
