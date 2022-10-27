#include <stdio.h>

int mystery(int* x, int* y) {
  int xx = *x;
  int yy = *y;
  xx++;
  yy++;
  *x = xx;
  *y = yy;
  return xx + yy;
}

int main() {
  int a = 2;
  int b = -4;
  int* ptrA = &a;
  int* ptrB = &b;

  int c = mystery(&a, &b);
  printf("%d\n", c);
}