#include <stdio.h>
#include <math.h>
#define N 10

int main(void){
    int i;
    double avg = 0, std = 0;
    double point[N] = {0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};

    for ( i = 0; i < N; i++)
      avg += point[i];
    avg /= 5;
    for ( i = 0; i < N; i++){
      std += (point[i] - avg) * (point[N] - avg);
    }

    printf("Avg is %.2f\n", avg);
    printf("Std is %.2f\n", sqrt(std));
    return 0;
}
