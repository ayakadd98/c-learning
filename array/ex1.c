#include <stdio.h>
int main() {
  char T[6];
  int i;
  printf("les valeur du tableaux \n");
  T[0] = 'A';
  T[1] = 'E';
  T[2] = 'I';
  T[3] = 'O';
  T[4] = 'U';
  T[5] = 'Y';
  for (i = 0; i < 6; i++)
    printf("%c ", T[i]);
  return 0;
}
