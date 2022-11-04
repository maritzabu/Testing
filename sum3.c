// gcc -Wall sum3.c -o sum3
// ./sum3 4 8 -5 0 20
// prints: Sum=27 Sum2=505 Sum3=8451

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x;   // Sum
  int y;   // Sum squares
  int z;   // Sum cubes
} sum_t;

static sum_t *sum3(int argc, char *argv[]) {
  static sum_t sum;
  TBD
  return &sum;
}

int main(int argc, char *argv[]) {
  sum_t *m;
  TBD
  printf("Sum=%d Sum2=%d Sum3=%d\n", m->x, m->y, m->z);
  return 0;
}
