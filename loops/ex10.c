#include <stdio.h>
#include <math.h>
int main() {
  int n,i;
  float s,a;
   printf("this program Computing the Sum of the Series 1+10+100+..+10^n \n");
   printf("enter n :\n");
   scanf("%d",&n);
  s=0;
  for(i=0;i<=n;i++) {
   s=s+pow(10,i);
    }
  printf("%.2f",s);
    return 0;
}
