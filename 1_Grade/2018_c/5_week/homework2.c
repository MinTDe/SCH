#include <stdio.h>

int main(void){
  int i;
  for(i=1;i<33;i++){
    printf("&");
    if(i % 8 == 0)
    printf("\n");
  }

  return 0;
}
