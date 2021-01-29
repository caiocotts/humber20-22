#include <stdio.h>
#include <stdlib.h>

void menu() {
  printf("  ___                  ___      _ _    _         \n");
  printf(" / __| ___ _ _  __ _  | _ )_  _(_) |__| |___ _ _ \n");
  printf(" \\__ \\/ _ \\ ' \\/ _` | | _ \\ || | | / _` / -_) '_|\n");
  printf(" |___/\\___/_||_\\__, | |___/\\_,_|_|_\\__,_\\___|_|  v 0.2.1 \n");
  printf("               |___/                                 \n");
  printf("\na. Build a song\nb. Play the song\nr. Reset song\nq. Quit\n > ");
}

void printChart() {
  printf("┌─────┬─────────────────────────┐\n");
  printf("│note │        octave           │\n");
  printf("│name │  3     4    5     6     │\n");
  printf("├─────├─────────────────────────┤\n");
  printf("│ C   │ 131   262   523  1047   │\n");
  printf("│ C#  │ 139   277   554  1109   │\n");
  printf("│ D   │ 147   294   587  1175   │\n");
  printf("│ D#  │ 156   311   622  1245   │\n");
  printf("│ E   │ 165   330   659  1319   │\n");
  printf("│ F   │ 175   349   698  1397   │\n");
  printf("│ F#  │ 185   370   740  1480   │\n");
  printf("│ G   │ 196   392   784  1568   │\n");
  printf("│ G#  │ 208   415   831  1661   │\n");
  printf("│ A   │ 220   440   880  1760   │\n");
  printf("│ A#  │ 233   466   932  1865   │\n");
  printf("│ B   │ 247   494   988  1976   │\n");
  printf("│ C   │ 262   523  1047  2093   │\n");
  printf("└─────┴─────────────────────────┘\n");
}

// int displayNotes(int counter) {
//   system("clear");
//   for (int i = 0; i < counter; i++) {
//     printf("%i ", i + 1);
//   }
//   printf("\n");
// }