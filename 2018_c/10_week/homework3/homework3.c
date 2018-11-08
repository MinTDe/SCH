#include <stdio.h>

int factorial(int);
void getpermu(int, int, int *);
void getcombi(int, int, int *);

int main(void){
  int n = 4, r = 2, nPr = 0, nCr = 0;
  //printf("Program Start\n");
  //printf("factorial : %d\n", factorial(3));
  getpermu(n, r, &nPr);
  getcombi(n, r, &nCr);
  printf("nPr is %d, and nCr is %d\n",nPr, nCr);
  //printf("Program End\n");
  return 0;
}

int factorial(int f){
  if(f == 1)
    return 1;
  return f * factorial(f-1);
}

void getpermu(int n, int r, int *pp){
  *pp = factorial(n)/(factorial(n-r));
}
void getcombi(int n, int r, int *pc){
  *pc = getpermu(n,r,pc)/factorial(n);
}
