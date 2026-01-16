#include <stdio.h> 
#include <math.h> 
int main() { 
  float n1,n2,n3,n4,n5,m,s;
  printf("this program asks the user to enter five grades and calculate their sum and the average \n");
  printf("please enter the five grades \n");
  scanf("%f %f %f %f %f ",&n1,&n2,&n3,&n4,&n5);
  s=n1+n2+n3+n4+n5;
  printf("thesum is :%.2f \n",s);
  m=s/2;
  printf("the average is :%.2f \n",m);
  return 0;
}

