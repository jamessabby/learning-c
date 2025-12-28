#include <stdio.h>

int main(void) {
  
  //  NOTE: USING SHIFTS INSTEAD OF MATHEMATICAL OPERATIONS CAN YIELD SMALLER CODE AND FASTER OPERATION

  // unsigned char x = 0b00000101;  // 5
  // unsigned char y;

  // NOTE: From left to right the bit patterns are 1, 2, 4, 8, 16, 32, 64, 128, and so on...


  // 00000101 <- initial

  // LEFT SHIFT

  // shifts all bits left, the leftmost bit is discarded, the rightmost bit is filled with 0

  // 000001010 <- output = 10

  // RIGHT SHIFT

  // removes the right most bit 0000001'0'

  // When it comes to right shifting SIGNED variables, 

  // NOTE: The left most bit determines the sign of the bit, 0 means positive and 1 means negative

  // If the bit is positive, all bits shift to right then fills the gap with 0
  // If the bit is negative, all bits shift to right and to maintain it's negativity, 1 is added to the left most part


  // LEFT SHIFT EXAMPLE:
  // y = x << 1;
  // printf("x << 1 = %d\n", y); // y = x * 2 (LEFT SHIFT MULTIPLIES BY 2);

  // RIGHT SHIFT EXAMPLE:
  // y = x >> 1;
  // printf("x >> 1 = %d\n", y); // y = x / 2 (RIGHT SHIFT DIVIDES BY 2 since Shifting right by n bits divides by 2^n);

  // 5 / 2 = 2.5 -> 2

  // NOTE: To get the decimal value of a negative two’s-complement number in SIGNED TYPE:
  /*
    Invert the bits, then add 1:
    Original:  11111010
    Invert:    00000101
    Add 1:     00000110 = 6 

    Because the original number was negative:
    -> -6

    IN UNSIGNED TYPE:
    unsigned char x = 0b11111010; // 250

  */

  signed char x = 0b00000101; // or just remove the '0b' -> 00000101 -> x = 5
  signed char y = 0b11111010; // 11111010 -> y = -6


  printf("%d\n", x);
  printf("%d\n", y);

  return 0;
}