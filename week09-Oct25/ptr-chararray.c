#include <stdio.h>

int main() {

  char vals[3] = {'h','I','\0'};
  char* valptr = vals;

  char v1 = vals[2]; 
  char* v1ptr = valptr + 2;
  char v2 = *v1ptr; 
  printf("%c %c\n", v1, v2);

  for (int i = 0; i < 3; i++) {
    printf("%c\n", vals[i]);
  }

  for (char* ptr = vals; ptr < vals+3; ptr++) {
    printf("%p %c\n", ptr, *ptr);
  }
}

