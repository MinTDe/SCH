#include <stdio.h>

struct point{
  int x;
  int y;
};

struct point add(struct point, struct point);

int main(void){
  struct point a = {10, 20};
  struct point b = {30, 40};
  struct point c = add(a, b);

  printf("(%d, %d) + (%d, %d) = (%d, %d)\n",a.x, a.y, b.x, b.y, c.x, c.y);

  return 0;
}

struct point add(struct point pt1, struct point pt2){
  pt1.x = pt1.x + pt2.x;
  pt1.y = pt1.y + pt2.x;

  return pt1;
}
