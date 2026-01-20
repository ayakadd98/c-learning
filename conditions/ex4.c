#include <stdio.h>
int main() {
  int age;
  char gender;
  printf("Program Determine Whether a Person Is Taxable Based on Age and Gender \n");
  printf("please enter your age :\n");
  scanf("%d",&age);
  printf("please enter your gender\"F if you are a female anf M if you are a man\" :\n");
  scanf(" %c",&gender);
  if((gender == 'M') && (age>=20))
    printf("You must pay the taxes");
  else if ((gender=='F') &&( (age>=18)&&(age<=35)))
    printf("You must pay the taxes");
  else 
     printf("You do not need to pay the taxes");
    return 0;
}
