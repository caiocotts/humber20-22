#include <stdio.h>
#include <stdlib.h>
int printer();
int main() {

  for (int i = 1; i < 20; i += 2) {
    printf("Number: %i Number times three: %i\n", i, i * 3);
  }

  // printf("\n\nEnter a number: ");
  // scanf("%d", &num);
  // printer(num);
}
// int printer(int number) {
//   int num2 = 1;
//   while (num2 < number) {
//     printf("Number: %i Number times three: %i\n", num2, num2 * 3);
//     num2 += 2;
//   }
// }

// int num = 1;
// while (num < 20) {
//   printf("Number: %i Number times three: %i\n", num, num * 3);
//   num += 2;
// }