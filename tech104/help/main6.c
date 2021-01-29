#include <stdio.h>
#include <stdlib.h>

int main() {
  // Program 1
  int nums[20];
  int total;

  for (int i = 1; i < 20; i = i + 2) {
    i * 3;
    printf(" Odd number:%d\n", i);
    printf("Num multiplied by three:%d\n", i * 3);
  }

  // Program2
  int num;
  printf("Enter a number: ");
  scanf("%i", &num);

  for (int i = 2; i <= num; i += 2) {
    printf("%d %d\n", i, i * 3);
  }

  return 0;
}
