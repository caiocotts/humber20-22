// #include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)

{

  int number, amount, result;

  number = 5;

  amount = 79;

  if ((number > 50) && (amount <= 5))

  {

    result = 4;

  }

  else if ((number < 100) || (amount == 5))

  {

    result = 3;

  }

  else if ((number > 80) && (amount == 5))

  {

    result = 2;

  }

  else

  {

    result = 1;
  }
  return 0;
}
