#include <stdio.h>

struct point {
  int x;
  int y;
};

int main(void){
  struct point pt[2] = { {0, 0}, {50, 50}};
  int px, py;

  px = (pt[0].x + pt[1].x)/2;
  py = (pt[0].y + pt[1].y)/2;

  printf("%d %d\n", px, py);

  return 0;
}
