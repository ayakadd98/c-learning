#include <stdio.h>
int main() {
  int j, i, a, r;
  printf("x*y | ");
  for (i = 1; i <= 10; i++) {
    printf("%d ", i);
  }
  printf("\n");
  for (j = 1; j <= 10; j++) {
    printf("%d   | ",j);
    for (a = 1; a <= 10; a++) {
      printf("%d ",a*j);
    }
  printf ("\n");
  }
    return 0;
  }
