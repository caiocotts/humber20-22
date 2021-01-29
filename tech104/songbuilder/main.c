#include "func.h"
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100

int main() {
  char mainMenuSelect;
  char wrongOption[max];
  char bashCmd[max * 50];
  char section[50];
  int length[max];
  float frequency[max];
  bool run = true;
  int counter = 0;

  system("clear");

  while (run == true) {
    if (counter >= max) {
      system("clear");
      printf("\033[0;35mwarning:\033[0m song contains 100 notes, no additional "
             "notes permitted\n");
    }
    menu();
    scanf("\n%c", &mainMenuSelect);

    mainMenuSelect = tolower(mainMenuSelect);

    switch (mainMenuSelect) {

    case 'a':

      system("clear");
      while (true) {
        if (counter >= max) {
          break;
        }
        printChart();
        printf("Enter frequency and lenght. (0 to quit)\n");
        printf("Frequency %i > ", counter + 1);
        scanf("%f", &frequency[counter]);

        if (frequency[counter] == 0) {
          system("clear");
          break;
        }

        printf("Length %i > ", counter + 1);
        scanf("%i", &length[counter]);
        if (length[counter] == 0) {
          frequency[counter] = 0;
          system("clear");
          break;
        }

        counter++;
        system("clear");
      }

      break;

    case 'b':
      if (counter == 0) {
        system("clear");
        printf("\033[0;31merror:\033[0m no song was built\n");
        break;
      }

      strcpy(bashCmd, "beep");
      for (int i = 0; i < counter; i++) {
        if (i > 0) {
          strcat(bashCmd, " -n ");
        }
        sprintf(section, " -f %.f -l %d", frequency[i], length[i]);
        strcat(bashCmd, section);
      }

      system(bashCmd);
      system("clear");
      break;

      // case 'd':
      //   displayNotes(counter);
      //   break;

    case 'r':
      counter = 0;
      system("clear");
      break;

    case 'q':
      system("clear");
      run = false;
      break;

    default:
      system("clear");
      printf("\033[0;31merror:\033[0m option %c: not found\n", mainMenuSelect);
      break;
    }
  }
}
