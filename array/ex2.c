#include <stdio.h>
int main() {
  float T[10];
  float m, s, p;
  int i;
  printf("entrer les valeurs du tableaux ");
  for (i = 0; i < 10; i++)
    scanf("%f", &T[i]);
  s = 0;
  for (i = 0; i < 10; i++) {
    s = s + T[i];
  }
  printf("La somme est :%.2f \n", s);
  p = 1;
  for (i = 0; i < 10; i++) {
    p = p * T[i];
  }
  printf("Le produit est :%.2f \n", p);
  m = s / 10;
  printf("La moyenne est :%.2f \n", m);
  return 0;
}
