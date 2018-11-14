#include <stdio.h>
#define N 5

int main(void){
    char cArr[N] = {'H','e','l','l','o'};
    int iArr[N] = {0, 1, 2, 3, 4};
    double dArr[N] = {0.0, 1.1, 2.2, 3.3, 4.4};
    int i;

    printf("cArr \t\tiArr\t\tdArr\n");
    printf("%p\t\t%p\t\t%p\n", cArr,iArr, dArr);

    for(i = 0; i < N; i++)
      printf("[%d]:%p\t[%d]:%p\t[%d]:%p\n",i, &cArr[i], i, &iArr[i], i, &dArr[i]);

    printf("%d\t\t\t%d\t\t\t%d\n", sizeof(cArr[0]), sizeof(iArr[0]), sizeof(dArr[i]));
    printf("%d\t\t\t%d\t\t\t%d\n", sizeof(cArr), sizeof(iArr), sizeof(dArr));

    return 0;
}
