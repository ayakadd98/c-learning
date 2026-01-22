#include <stdio.h>
int main() {
  int n,i,s;
  printf("this program Calculate the Sum of Up to 8 Numbers While Ignoring Negative Inputs.\n");
 s=0;
 for(i=0;i<8;i++){
   printf("enter n :\n");
   scanf("%d",&n);
   if(n<0) continue;
   s=s+n;
   }
  printf("%d",s);
    return 0;
}
