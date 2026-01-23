#include <stdio.h>
#include <math.h>
int main() {
  int n,i,s;
   printf("this program Calculate The divisors of a positive non-zero numbers \n");
  do{ printf("enter n :");
   scanf("%d",&n);}
    while(n<=0);
  for(i=1;i<=n;i++){
    if(n%i==0 ) 
      printf ("%d \n",i);
    else continue;
    }
    return 0;
}
