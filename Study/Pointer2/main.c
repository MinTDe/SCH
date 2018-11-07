#include <stdio.h>

int main(void){
  int i = 10, j = 5;
  int *ptr;

  ptr = &i;
  *ptr += i;
  printf("i : %d *ptr : %d\n", i, *ptr);

  ptr = &j;
  printf("*ptr : %d\n", *ptr);
  *ptr *= j;
  printf("j : %d *ptr : %d", j, *ptr);

  return 0;
}
