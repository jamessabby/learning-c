#include <stdio.h>

int main() {

  signed char x = 0b00000101;  // 5
  signed char y = 0b11111010;  // -6
  char z = 0;

  // z = x - y * z; // x - (y * z) -> 5 - (-6 * 0) -> 5 - 0 = 5
  // z = x + ++y; // x + (++y) -> 5 + (-5) = 0
  z = x + ++y * z; // 5 + ((-5) * 0) = 5

  printf("%d", z);

  // NOTE: Just use parenthesis () to force the order of the operation in a more readable way than looking up on all the rules of precedence

  return 0;
}