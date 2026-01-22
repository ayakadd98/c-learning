#include <stdio.h>
int main() {
  int n,i;
  float s,a;
   printf("this program Computing the Sum of the Series 1 + 1/2 + 1/3 + … + 1/n \n");
   printf("enter n :\n");
   scanf("%d",&n);
   s=0;
  for(i=1;i<=n;i++) {
   a=1.0/i;
   s=s+a;
    }
  printf("%.2f",s);
    return 0;
}
