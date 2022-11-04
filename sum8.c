// gcc -Wall sum8.c -o sum8
// ./sum5 4 8 -5 0 20
// prints: Sum=27 Sum2=505 Sum3=8451

#include <stdio.h>
#include <stdlib.h>

// sums[0] is sum, [1] is sum squares, [2] is sum cubes
static void sum8(int argc, char *argv[], int *sums) {
  TBD
}

int main(int argc, char *argv[]) {
  int sums[3];  // sums[0] is sum, [1] is sum squares, [2] is sum cubes
  TBD
  printf("Sum=%d Sum2=%d Sum3=%d\n", sums[0], sums[1], sums[2]);
  return 0;
}
