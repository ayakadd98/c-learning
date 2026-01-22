#include <stdio.h>
int main() {
  int n;
  printf("this program Input Validation Without Loops (Numbers from 1 to 5) \n");
 
   alpha:
   printf("enter n :\n");
   scanf("%d",&n);
  if(n<1 || n>5)
   goto alpha;

 
    return 0;
}
/* alpha etiquete psk galoulna khadmou bla boucle */
