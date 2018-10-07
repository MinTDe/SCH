#include <stdio.h>

int main(void){
  int i = 1;
  int j = 1;
  while ( i <= 5 ){
    j = 1;
    while ( j <= i){
      //printf(" ");
      if(i == j){
        if(i % 2 == 0)
          printf("O");
        else
          printf("X");
      }
      j++;
      printf(" ");
    }
    printf("\n");
    i++;
  }
}
