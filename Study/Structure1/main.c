#include <stdio.h>
#define N 14550
#define MAX 300.0

int main(void){
  double x[N], y[N];
  double bin = MAX / N;
  double a = 0.5, b = 0;
  int i;

  for (i = 0; i < N; i++){
    x[i] = bin * i;
  }

  for ( i = 0; i < N; i++){
    y[i] = a * x[i] +b;
  }

  for( i = 0; i < N; i++){
    printf("%+10.8f, %+10.8f\n", x[i], y[i]);
  }

  return 0;
}
