#include <stdio.h>

int main(void){
  int arr[3][2][3] = {{{0,1,2},{1,2,3}},{{0,1,2},{1,2,3}},{{0,1,2},{1,2,3}}};
  int i,j,k;

  for( i = 0; i < 3; i++){
    for(j = 0; j < 2; j++){
      for(k = 0; k < 3; k++){
        printf("%d, ", arr[i][j][k]);
      }
    }
    printf("\n");
  }
  return 0;
}
