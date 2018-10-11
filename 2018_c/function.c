#include <stdio.h>

int add(int , int);

int main(void){
  //int sum = add(1,2);

  printf("%d\n", add(1,2));

  return 0;
}

int add(int a, int b){
  //int sum = a + b;

  return a + b;
}
//매개변수는 지역변수처럼 사용할 수 있다.
//함수도 표현
//인수는 표현식이 와도 괜찮음
