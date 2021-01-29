#include <stdio.h>
#include <stdlib.h>
void Beep(float f, float d) { printf(">> %f %f\n", f, d); };
int main() {
  int n;
  char menu;
  float frequency[99];
  float duration[99];
  // run the whole program in here and not just this menu, and you need to make
  // a function to display menu
  while ((menu != 'a') && (menu != 'A') && (menu != 'b') && (menu != 'B') &&
         (menu != 'c') && (menu != 'C')) {
    printf("Start by entering one of the following options from the menu\n",
           menu); // remove the comma menu, this is not doing anything in this
                  // printf
    printf("A. Build song \n");
    printf("B. Play song \n");
    printf("C. Quit \n");
    scanf("%c", &menu);
  }

  switch (menu) { // since the switch is not in a while loop, after any case is
                  // exexuted, your program will jump
  // dirrectly to the return 0; and end the program
  case 'a':
    if ((menu == 'a') || (menu = 'A')) {
      for (int i = 0; i < 3; i++) {
        printf("Please enter the note frequency \n");
        scanf("%f", &frequency[i]);

        printf("Please enter the note duration \n");
        scanf("%f", &duration[i]);

        system("CLS");
      }
    }
    break;
  case 'b':
    // code
    for (int i = 0; i < 3; i++)
      Beep(frequency[i], duration[i]);
    system("CLS");
    break;
  case 'q': // in your program you want the quit option to be executed when the
            // user enters c into the menu, not q
    // code
    printf("You have chosen to quit\n");
    break;

  default:
    break;
  }
  return 0;
}
