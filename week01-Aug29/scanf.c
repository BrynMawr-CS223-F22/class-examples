#include <stdio.h>

int main() {
  printf("Do you like jokes? (y/n): ");

  char response = 0;
  scanf(" %c", &response);

  printf("You chose: %c\n", response);
  if (response == 'y') {
    printf("Yes, me too!\n");
  } else if (response == 'n') {
    printf("Me neither!\n");
  } else {
    printf("I don't get you.\n");
  }

  return 0;
}
