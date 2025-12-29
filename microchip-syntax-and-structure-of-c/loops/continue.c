#include <stdio.h>

int main() {

  int i = 0;
  int x = 5;

  while (i < 5) {
    i++;
    if (i == 2) continue;
    x = x + i;
    printf("x = %d;\n", x);
  }

  return 0;
}