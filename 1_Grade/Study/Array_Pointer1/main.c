#include <stdio.h>

int main(void){
  char iArr[3] = {0, 1, 2};

  printf("%p\n", &iArr[0]);
  printf("%p\n", &iArr[1]);
  printf("%p\n", &iArr[2]);

  return 0;
}
