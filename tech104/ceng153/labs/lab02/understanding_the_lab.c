#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 18446744073709551615

int main() {

  unsigned long long int num = 1;
  //   u_int64_t num;
  while (num < MAX) {
    num *= 2;
    printf("%llu\n", num);
  }
}