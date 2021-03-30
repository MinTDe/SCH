#include <stdio.h>

int main(void){
  int x = 0;
  int *pi1, *pi2;

  pi1 = &x;
  pi2 = pi1;

  printf("%d %d %d\n",x ,*pi1, *pi2);

  ++*pi1;
  --*pi2;
  *pi1++;
  *pi2++;

  printf("%d %d %d",x, *pi1, *pi2);

  return 0;
}
