#include <stdio.h>

int main() {
  void *gen_ptr;
  int x = 3;
  char ch = 'a';

  gen_ptr = &x;  // gen_ptr can be assigned the address of an int
  gen_ptr = &ch; // or the address of a char (or the address of any type)

  int* int_ptr;
  int_ptr = &x;

  printf("The int value is %d\n", *int_ptr);
  printf("The void* value is %c\n", * ((char*) gen_ptr));
  printf("The void* value is %f\n", * ((float*) gen_ptr));
  return 0;
}