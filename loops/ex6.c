#include <stdio.h>
int main() {
  int n,i;
   printf("this program Printing the Next Ten Consecutive Numbers \n");
   printf("enter n :\n");
   scanf("%d",&n);
  for(i=n+1;i<=n+10;i++)
    printf("%d \n",i);
    return 0;
}
