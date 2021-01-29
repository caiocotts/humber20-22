#include <stdio.h>
#include <stdlib.h>

int printer();

int main() {
  // Program 1

  for (int i = 1; i < 20; i += 2) {
    i * 3;
    printf("Odd number:%d  Num multiplied by three:%d\n", i, i * 3);
  }

  // Program2
  int n;
  printf("\nEnter a number: ");
  scanf("%i", &n);
  printer(n);

  return 0;
}

int printer(int num) {
  for (int i = 2; i <= num; i += 2) {

    printf("Even number:%d  Num multiplied by three:%d\n", i, i * 3);
  }
}
