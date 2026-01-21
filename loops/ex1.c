#include <stdio.h>
int main() {
  int n,r,i;
  printf("enter n ");
  scanf("%d",&n);
  while(n<0 || n>10) {
    printf("enter n");
    scanf("%d",&n);}
  for(i=0;i<=10;i++) {
    r=n*i;
    printf("%d * %d = %d\n",n,i,r);
    }
  
    return 0;
}
