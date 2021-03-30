#include <stdio.h>

int main(void){
  char str[100] = "Hello, world!";
  printf("%p\n", str);
  printf((char *)str);
  printf("\n");
  printf("%s\n", str);
  printf(str);
}
