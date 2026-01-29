#include <stdio.h>
#include <math.h>
int main() {
  int r,o,x,y,n;
  float a,b,p;
  printf("***This program is a calculator***\n");
  menu:
  printf("The menu :\n");
  printf("\n1-addition\n2-subtraction\n3-multiplication\n4-division\n5-remainder of an integer division\n6-power \n\n");
  printf("Choose a number from 1 to 6 according to the corresponding arithmetic operation:\n");
  scanf("%d",&o);
  switch(o){
    case 1 :{ 
      printf("enter a and b\n");
      scanf("%f %f",&a,&b);
      printf("%.2f + %.2f= %.2f",a,b,a+b);
      break;}
    case 2 :{
      printf("enter a and b\n");
      scanf("%f %f",&a,&b);
      printf("%.2f - %.2f= %.2f",a,b,a-b);
      break;}
    case 3 :{
      printf("enter a and b\n");
      scanf("%f %f",&a,&b);
      printf("%.2f * %.2f= %.2f",a,b,a*b);
      break;}
    case 4 :{
      division:
      printf("enter a and b\n");
      scanf("%f %f",&a,&b);
             if(b!=0)
      printf("%.2f / %.2f= %.2f",a,b,a/b);
             else {
     printf("the division is impossible please enter b again:");
      goto division;}
      break;}
    case 5 :{ 
      remain:
        printf("enter two integers:\n");
        scanf("%d %d",&x,&y);
               if(b!=0){ 
        r=x%y;
        printf("remainder of the division is %d",r);}
               else { 
       printf("the division is impossible please enter b again:");
        goto remain; } 
      break;}
    case 6 :{
      printf("enter a and b\n");
      scanf("%f %f",&a,&b);
      p=pow(a,b);
      printf("%.2f * %.2f= %.2f",a,b,p);
      break;}
    default : printf("wrong number");
      break;
  }
  printf("\n\n");
  printf("Do you want another operation?(click on 1 if yes and any number if no)");
  scanf("%d",&n);
  switch(n){
    case 1:goto menu;
    break;
    default:printf("Thank you");
    break;
  }
  return 0;
}
