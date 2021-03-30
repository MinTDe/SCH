#include <stdio.h>

int power(int, int);

int main(void){
  int base = 5, exp=3;
  printf("The %dth power of %d is %d.\n",exp, base, power(base,exp));

  return 0;
}

int power(int base,int exp){
  int i;
  int sum = 1;
  for(i = 1;i <= exp;i++)
    sum *= base;

  return sum;
}
