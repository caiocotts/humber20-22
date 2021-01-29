#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  system("clear");
  int size;
  printf("Enter size of vector: ");
  scanf("%i", &size);
  float vector[size];

  memset(vector, 0, size * sizeof(float));
  // sets all values in vector to 0, size X the size of one float is equivalent
  // to the number of values in vector

  for (int i = 0; i <= size; i++) {
    system("clear");

    for (int i = 0; i < size; i++) {
      printf("%.2f ", vector[i]);
    }
    puts("");

    if (i < size) {
      printf("\nEnter value number #%i: ", i + 1);
      scanf("%f", &vector[i]);
    }
  }

  float sum = 0;
  for (int i = 0; i < size; i++) {
    sum += vector[i];
  }
  float average = sum / size;

  sum = 0;
  for (int i = 0; i < size; i++) {
    sum += pow((vector[i] - average), 2);
  }
  float deviation = sqrt(sum / size - 1);

  printf("\nStandard deviation is: %f\n", deviation);
}
