#include <stdio.h>

int main(void){
  char str1[100], str2[100], str[200];
  int i=0, j=0;

  printf("Input 1st string: ");
  fflush(stdout);
  gets(str1);

  printf("Input 2nd string: ");
  fflush(stdout);
  gets(str2);

  while(str1[i] != '\0'){
    str[i] = str1[i];
    i++;
  }
  while(str2[j] != '\0'){
    str[i] = str2[j];
    i++;
    j++;
  }

  printf("%s", str);

  return 0;

}
