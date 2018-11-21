#include <stdio.h>
#define M 3

void printMlDa(int []);
void printMlDA(int *);

int main(void){
  int A[M] = {1,2,3};

  printf("%d\n", sizeof(A));
  printMlDA(A);
  printf("\n");
  printMlDa(A);
  printf("\n");

  return 0;
}

void printMlDA(int a[]){
  int i;
  //printf("%d\n", sizeof(a));
  for ( i = 0; i < M; i++){
    printf("%d ", a[i]);
  }
}

void printMlDa(int *a){
  int i;
  printf("%d\n", sizeof(a));
  for ( i = 0; i < M; i++){
    printf("%d ", *(a+1));
  }
}
