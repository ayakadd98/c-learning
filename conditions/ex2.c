#include <stdio.h>
int main() {
  int a,b,c;
  printf("Program to Swap Two Numbers If They Have the Same Sign; Otherwise Store Their Sum and Product. \n");
  printf("please enter the first number:\n");
  scanf("%d",&a);
  printf("please enter the second number:\n");
  scanf("%d",&b);
 if(a*b<0){
  c=a;
  a=b;
  b=c;
  printf("a=%d et b=%d ",a,b);
   }
  else 
  a=a+b;
  b=(a-b)*b;
  printf("a=%d et b=%d ",a,b);
  return 0;
}
