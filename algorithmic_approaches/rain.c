#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int range[10];
  int rainfall[20] = {0,  3,  13, 45, 25, 10, 0,  0,  0,  0,
                      23, 12, 20, 1,  2,  0,  23, 30, 35, 0};
  memset(range, 0, 10);
  for (int i = 0; i <= 20; i++) {
    if (i == 20) {
    }
    int position = trunc(rainfall[i] / 5) + 1;
    range[position] = range[position] + 1;
  }
}