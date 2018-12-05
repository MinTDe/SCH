#include <stdio.h>

struct strings{
  char *Str;
  int length;
};

void getlength(struct strings *);

int main(void){
  struct strings strAr[3] ={ {"Hello", 0}, {", ", 0}, {"World!", 0} };
  int i = 0;

  getlength(&strAr[i]);
  return 0;
}

void getlength(struct strings *a){
  int i = 0;
  printf("1\n");
  printf("%c ", a -> Str[i]);
  printf("%s ", a -> Str++);
  printf("%s ", a -> Str++);
  printf("%s ", a -> Str++);
  printf("%s ", a -> Str++);
  printf("%s ", a -> Str++);
  printf("%d ", a -> Str++);
  printf("%d ", a -> Str++);
  printf("%d ", a -> Str++);
  jhkjhkjh

}
