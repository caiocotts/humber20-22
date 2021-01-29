#include <stdio.h>
#include <stdlib.h>
/*
*********************
* Caio    N01415150 *
*********************
*/
int printer();

int main() {
  // delcare variable questionSelect, product, and initiate num with the value
  // of 0
  char questionSelect;
  int num = 0;
  int product;

  printf("Run question 1 or 2? :  ");
  scanf("%c", &questionSelect);
  // selects question
  switch (questionSelect) {
  case '1':

    // run the following code while int i is less then or equal to 20
    for (int i = 0; i <= 20; i++) {
      // if the remainder of num divided by 2 is not equal to 0
      if (num % 2 != 0) {
        // print num and num times 3, increment num by 1
        printf("Number: %i ", num);
        product = num * 3;
        printf("Number times three: %i\n", product);
        num++;
      } else {
        // increment num by 1
        num++;
      }
    }
    break;
    int iteration;
  case '2':
    printf("Enter the number of iterations: ");
    scanf(" %i", &iteration);
    printer(iteration);
  default:
    exit;
    break;
  }
}

int printer(int funcIteration) {
  int funcNum = 1; // changed this to 1
  int funcProduct;
  puts("");
  for (int i = 0; i <= funcIteration; i++) {
    if (funcNum % 2 == 0) { // != becomes ==
      printf("Number: %i ", funcNum);
      funcProduct = funcNum * 3;
      printf("Number times three: %i\n", funcProduct);
      funcNum++;
    } else {
      funcNum++;
    }
  }
}