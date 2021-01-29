#include <stdio.h>
#include <stdlib.h>

int main() {

  // When variable "space" is called inside of printf, it'll print a big empty
  // line with pipes on either end
  char space[48] = "|                                             |";
  const int max =
      100; // This constant will be used to create the variable "string"
  int itemNum;
  float costPerItem, costSum, afterTax;
  char string[max]; // This variable will store all the numbers so that they can
                    // be formated easier
  const float tax = 1.13;
  printf("Enter the number of items purchased and the cost per item: ");
  scanf("%d %f", &itemNum, &costPerItem);

  // These calculations will find the total and subtotal
  costSum = costPerItem * itemNum;
  afterTax = costSum * tax;

  printf("\n\n\n _____________________________________________\n");
  printf("%s\n", space);
  printf("|               +-+-+-+-+-+-+-+               |\n");
  printf("|                R e c e i p t                |\n");
  printf("|               +-+-+-+-+-+-+-+               |\n");
  printf("%s\n", space);
  printf("|*********************************************|\n");
  printf("%s\n", space);
  printf("|Quantity                %21d|\n", itemNum);

  /* "costPerItem" is converted to a string and stored in variable "string", and
      then printed with a $ bound to it. This conversion allows for numbers to
     be very large but still be formated neatly. This step is repeated for each
     of the values to be printed */

  sprintf(string, "$%.2f", costPerItem);
  printf("|Cost per item           %21s|\n", string);

  printf("%s\n", space);

  sprintf(string, "$%.2f", costSum);
  printf("|Subtotal                %21s|\n", string);

  sprintf(string, "$%.2f", tax);
  printf("|Tax                     %21s|\n", string);

  sprintf(string, "$%.2f", afterTax);
  printf("|TOTAL                   %21s|\n", string);

  printf("|*********************************************|\n");
  printf("|         ~|~|_  _  _ |      _    |           |\n");
  printf("|          | | |(_|| ||<  \\/(_)|_|.           |\n");
  printf("|                         /                   |\n");
  printf("\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/"
         "\n");
}