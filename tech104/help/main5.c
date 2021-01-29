#include <stdio.h>
#include <stdlib.h>

int main() {
  for (int i = 1; i < 20; i += 2) {
    printf("%i %i\n", i, i * 3);
  }
}