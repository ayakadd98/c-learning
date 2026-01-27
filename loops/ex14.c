#include <stdio.h>
int main() {
  int n, a, i;
  printf("enter n \n");
  scanf("%d", &n);
  a = 1;
  for (i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      a = 0;
      break;
    };
  }
  if (a == 1)
    printf("%d est un nombre premier", n);
  else
    printf("%d est pas un nombre premier", n);
  return 0;
}
