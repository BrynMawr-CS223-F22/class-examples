#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// todo: define rand_point as a function with pointer parameters

void main() {
  srand(time(0));
  int x,y,z;
  rand_point(&x, &y, &z);
  printf("point: %d, %d, %d\n", x, y, z);
}
