#include <stdio.h>

int main(void){
  char cArr[2] = {'a', 'b'};
  int iArr[2] = {0, 1};
  double dArr[2] = {0.1, 0.2};

  printf("size of cArr, iArr, dArr is %d %d %d\n",sizeof(cArr),sizeof(iArr), sizeof(dArr));
  printf("The adress of cArr is %p\n", cArr);
  printf("The adress of cArr[1] is %p\n", &cArr[1]);
  printf("The adress of cArr[2] is %p\n", &cArr[2]);
  printf("The adress of iArr is %p\n", iArr);
  printf("The adress of iArr[1] is %p\n", &iArr[1]);
  printf("The adress of iArr[2] is %p\n", &iArr[2]);
  printf("The adress of dArr is %p\n", dArr);
  printf("The adress of dArr[1] is %p\n", &dArr[1]);
  printf("The adress of dArr[2] is %p\n", &dArr[2]);

  return 0;

}
