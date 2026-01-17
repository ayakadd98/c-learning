#include <stdio.h>
#include <math.h>
int main() {
  float R1,R2,R3;
  float Ra,Rb;
  printf("Program to Calculate the Equivalent Resistance \n");
  printf("please enter R1:\n");
  scanf("%f",&R1);
  printf("please enter R2:\n");
  scanf("%f",&R2);
  printf("please enter R3:\n");
  scanf("%f",&R3);
  Ra=R1+R2+R3;
  Rb=1/((1/R1)+(1/R2)+(1/R3));
  printf(" Resistors in Series: %.2f \n",Ra);
  printf(" Resistors in Parallel: %.2f \n",Rb);
  return 0;
}
