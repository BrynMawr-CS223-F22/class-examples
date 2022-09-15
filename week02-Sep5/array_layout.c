#include <stdio.h>

int main() {
  int table[3][4] = {
    {1,1,1,1},
    {2,2,2,2},
    {3,3,3,3},
  };

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      int* ptr = &(table[i][j]);
      printf("%p: table[%d][%d]\n", ptr, i, j);
    }
  }
  return 0;
}
