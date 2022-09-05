#include <stdio.h>

int main() {
  int* value = NULL;
  if (value != NULL) {
    printf("value is %d\n", *value);
  }

  int a = 4;
  value = &a;

  if (value != NULL) {
    printf("value is %d\n", *value);
  }
}

