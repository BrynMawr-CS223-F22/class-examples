#include <stdio.h>
#include <stdlib.h>

struct chunk {
  int size;
  struct chunk *next;
};

int main() {
  int size = sizeof(int) * 5;
  void *memory = malloc(size + sizeof(struct chunk));
  if (memory == NULL) {
    return 1;
  } 

  struct chunk *cnk = (struct chunk*) memory;
  cnk->size = size;
  void* data = (void*) (cnk + 1);
  int* array = (int*) data;

  for (int i = 0; i < 5; i++) {
    array[i] = i;
  }

  for (int i = 0; i < 5; i++) {
    printf("%d\n", array[i]);
  }
  
  free(memory);
  return 0;
}