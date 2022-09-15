#include <stdio.h>

int main() {
  int vals[4] = {1,2,3,4};

  printf("-------\n");
  for (int* ptr = vals; ptr < vals+4; ptr++) {
    printf("%p %d\n", ptr, *ptr);
  }

  printf("-------\n");
  for (int* ptr = vals; ptr < vals+4; ptr++) {
    char* cptr = (char*) ptr;
    for (int i = 0; i < sizeof(int); i++) {
       printf("%02x ", *(cptr+i));
    }
    printf("\n");
  }
  return 0;
}

