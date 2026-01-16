#include <stdio.h> 
int main() { 
  int y1,y2,age;
  printf("This program is for calculate your age :\n");
  printf("Please enter this year : \n"); 
  scanf("%d",&y1);
  printf("Please enter the year you were born in : \n");
  scanf("%d",&y2);
  age=y1-y2;
  printf("your age is: %d ",age);
  return 0; }
