#include <stdio.h>
int main() {
  int n,i;
   printf("this program Printing the Next Ten Consecutive Numbers \n");
   printf("enter n :\n");
   scanf("%d",&n);
  i=n+1;
  while(i<=n+10){
    printf("%d \n",i);
    i++;
      }
    return 0;
}
