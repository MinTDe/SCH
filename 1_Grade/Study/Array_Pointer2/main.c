#include <stdio.h>

int main(void){
  int iArr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,};
  int *p, i ,x;

  p = &iArr[0];
  for (i = 0; i < 10; i++){
    x = *p;
    printf("%d\n", x);
    p++;
  }
  printf("\n");

  p = &iArr[0];
  for (i = 0; i < 10; i++){
    printf("%d\n", *(p++));
  }
  printf("\n");

  return 0;
}
