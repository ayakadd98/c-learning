#include <stdio.h>
int main() {
  int n,i;
  printf("enter n entre 10 et 20 ");
  scanf("%d",&n);
  while(n<10 || n>20) {
    if (n<10) 
      printf("plus petit \n");
    else 
      printf("plus grand \n");
    printf("reenter n ");
    scanf("%d",&n);}
  
    return 0;
}
