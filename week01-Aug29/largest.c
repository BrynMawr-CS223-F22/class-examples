#include <stdio.h>  // printf/scanf here
#include <stdlib.h> // rand defined here
#include <time.h>  // time defined here


int largest(int arr[], int n) {
  int maxVal = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > maxVal) {
      maxVal = arr[i];
    }
  }
  return maxVal;
}

int main() {
  srand(time(NULL));
  int values[10];
  for (int i = 0; i < 10; i++) {
    values[i] = rand();
    printf("%d\n", values[i]);
  }

  printf("The largest value is %d\n", largest(values, 10));
  return 0;
}

