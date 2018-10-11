#include <stdio.h>

void printm(int, int);

int main(void){
  int row = 5, column = 5;
  printm(row, column);

  return 0;
}

void printm(int r,int c){
  int i;
  for(i = 1; i <= r*c; i++){

    if(i % 2 == 0)
      printf("o");
    else
      printf("x");
    if(i % 5== 0)
      printf("\n");

  }
}
