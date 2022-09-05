#include <stdio.h>
#include <string.h>

int main() {
  char greeting[5] = "ciao";
  const char* message = "This is the message";

  char buffer[10];
  buffer[0] = 'h';
  buffer[1] = 'i';
  buffer[2] = '\0';

  printf("%s\n", greeting);
  printf("%s\n", message);
  printf("%s\n", buffer);

  int len = strlen(message);
  printf("%d\n", len);

  strcpy(buffer, "test");
  printf("%s\n", buffer);

}

