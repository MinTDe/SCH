#include <stdio.h>

int main(void){
  int iArr[10];
  int *p, i;
  for(i = 0; i < 10; i++)
    iArr[i] = i;

  p = iArr;

  printf("%d, ", *(p+4));
  printf("%d, ",*(p+8));
  printf("%d", *(p+12));

  return 0;
}
