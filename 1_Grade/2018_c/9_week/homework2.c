#include <stdio.h>

int main(void) {
  char str[100] = "Yesterday \"All\" My \'Troubles\' Seemed So Far Away.";
  int nArr[3] = {0,0,0};

  int i = 0;
  while (str[i] != '\0'){
    if (str[i] >= 65 && str[i] <= 90)
      nArr[0]++;
    else if (str[i] >= 97 && str[i] <= 122)
      nArr[1]++;
    else
      nArr[2]++;

    i++;
  }

  for (i = 0; i < 3; i++)
    printf("%d, ", nArr[i]);

  return 0;
}
