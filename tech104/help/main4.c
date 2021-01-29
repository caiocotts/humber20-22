#include <stdio.h>
#include <stdlib.h>

int main() {
  int sum; //  not needed
           //   int nums[20];   unused
           //   int total;      unused

  for (int i = 0; i > 20; i = i + 2) { // needs to start at 1 not zero, and
                                       // while less than 20, not greater than
    sum = i * 3; // instead of declaring this var, you could simply use i * 3
    printf("%d", sum); // these 2 could become one printf
    printf("%d", i);
  }; // remove this semi colon

  return 0;
}
