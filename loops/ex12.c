#include <stdio.h>
#include <math.h>
int main() {
  int n,i,s;
   printf("this program Calculating the Sum of the Squares of the First n Odd Numbers \n");
   printf("enter n :");
   scanf("%d",&n);
  s=0;
   for(i=1;i<=2*n-1;i=i+2){
    s=s+pow(i,2);
   }
  printf("%d\n",s);
    return 0;
}
