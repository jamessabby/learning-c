#include <stdio.h>

int main() {

  int num1 = 10;

  num1 += 5;    // same as num1 = num1 + 5

  printf("%d", num1);

  printf("\n");

  if (15 == num1) {          // same as num1 == 15, the compiler doesn't care about the order
    printf("num1 is 15\n");
  }

  return 0;
}