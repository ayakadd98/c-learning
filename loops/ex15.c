#include <stdio.h>
int main() {
  int  j, r,i;

  for (i = 0; i <= 10 ; i++) {
    printf("la table de multiplication de %d est:\n",i);
    for (j = 1; j <= 10 ; j++) {
      printf("%d * %d= %d \n",i,j,i*j);
    }
  }
  return 0;
}
