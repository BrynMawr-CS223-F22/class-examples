#include <stdio.h>
#include <stdlib.h>

struct foo {
  char text[8];
  int value;
};

int main() {
  struct foo a;
  printf("sizeof(foo) = %lu\n", sizeof(a));
  return 0;
}

