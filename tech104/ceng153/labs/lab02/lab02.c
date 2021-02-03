/*
************************
******* lab01.c ********
************************
*/

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "ghcontrol.h"

int main() {
  time_t now;
  srand((unsigned)(time(NULL)));

  GhDisplayHeader("Caio Cotts");
  while (1) {
    now = time(NULL);
    // printf("------%Lx\n", GhGetSerial());
    fprintf(stdout, "\nUnit: %Lx %sReadings\tT: %dC\n", GhGetSerial(),
            ctime(&now), GhGetRandom(100) - 50);
    GhDelay(GHUPDATE);
  }


  return EXIT_FAILURE;
}
