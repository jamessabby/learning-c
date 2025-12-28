#include <stdio.h>

int main() {
  
  // without cast operator
  // int a = 10;
  // int b = 4;
  // float c;

  // c = 10 / 4;
  // printf("%.2f", c); // 2.00

  // with cast operator
  int a = 10;
  int b = 4;
  float c;

  c = (float)10 / 4;
  printf("%.2f", c); // 2.50

  return 0;
}