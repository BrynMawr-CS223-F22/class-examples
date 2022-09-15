#include <stdio.h>
#include <stdlib.h>

int main() {
  int *arr;
  char *c_arr;

  // allocate an array of 20 ints on the heap:
  arr = malloc(sizeof(int) * 20);

  // allocate an array of 10 chars on the heap:
  c_arr = malloc(sizeof(char) * 10);

  for (int i = 0; i < 20; i++) {
    arr[i] = i;
  }

  for (int i = 0; i < 9; i++) {
    c_arr[i] = 'a' + i;
  }
  c_arr[9] = '\0';

/*
  for (int i = 0; i < 20; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  printf("%s\n", c_arr);
*/
  free(arr);
  arr = NULL;

  free(c_arr);
  c_arr = NULL;


  return 0;
}
