#include <stdio.h>
int main() {
  float t1,t2,t3,m;
  printf("please enter the three marks:\n");
  scanf("%f %f %f",&t1,&t2,&t3);
  m=(t1+t2+t3)/3;
  if(m>=16)
    printf("the average of the grades is %f tres bien",m);
  else if ((m>=14)&&(m<16))
    printf("the average of the grades is %f bien",m);
  else if ((m>=12)&&(m<14))
    printf("the average of the grades is %f assez bien",m);
  else if ((m>=10)&&(m<12))
    printf("the average of the grades is %f passable",m);
  else 
     printf("the average of the grades is %f insuffisant",m);
    return 0;
}
