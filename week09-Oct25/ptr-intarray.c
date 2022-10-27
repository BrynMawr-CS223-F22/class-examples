#include <stdio.h>

int main() {

  int vals[4] = {1,2,3,4};
  int* valptr = vals;

  int v1 = vals[2]; 
  int* v1ptr = valptr + 2;
  int v2 = *v1ptr; 
  printf("%d %d\n", v1, v2);
  // draw stack diagram here

  for (int i = 0; i < 4; i++) {
    printf("%d\n", vals[i]);
  }

  for (int* ptr = vals; ptr < vals+4; ptr++) {
    printf("%p %d\n", ptr, *ptr);
  }

}
