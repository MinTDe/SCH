#include <stdio.h>

int main(void){
  int i1 = 0, i2 = 0;
  int *pi1, *pi2;
  pi1 = &i1;
  pi2 = &i2;

  *pi1 = 1;
  *pi2 = *pi1;
  *pi1 += 1;
  printf("i1 : %d i2 : %d *pi1: %d *pi2 :%d \n",i1,i2,*pi1,*pi2);

  pi1 = pi2;
  *pi1 += 1;
  printf("i1 : %d i2 : %d *pi1 : %d *pi2 : %d\n",i1,i2,*pi1,*pi2);
  return 0;
}
