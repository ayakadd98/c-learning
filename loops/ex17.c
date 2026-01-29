#include <stdio.h>
#include <time.h>
int main() {
  int a, i, n;
  const int MAX = 30, MIN = 1;
  srand(time(NULL));
  a = (rand() % (MAX - MIN + 1)) + MIN;
  for (i = 0; i < 5; i++) {
    printf("entrer le nombre \n");
    scanf("%d", &n);
    if (n > a) {
      printf("grand \n");
      continue;
    } else if (n < a) {
      printf("petit \n");
      continue;
    } else {
      printf("bravo \n");
      break;
    }
  }
  if (a == n)
    printf("vous avez trouver le nombre en %d essais", i + 1);
  else
    printf("vous avez depassé le nombre de tentative");
  return 0;
}
