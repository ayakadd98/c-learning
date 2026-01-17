#include <stdio.h>
#include <math.h>
int main() {
  int T,h,s1,min,s;
  printf("This program Convert a Time Given in Seconds into Hours, Minutes, and Seconds.\n");
  printf("please enter the time in seconds:\n");
  scanf("%d",&T);
  h=T/3600;
  s1=T%3600;
  min=s1/60;
  s=s1%60;
  printf("The time is :%d h %d min %d s",h,min,s);
  return 0;
}
