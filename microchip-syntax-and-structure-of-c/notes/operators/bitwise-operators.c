#include <stdio.h>

int main() {

  // EX 1

  // char x = 0b00001011;
  // char y = 0b00000101;
  // char answer;

  // answer = x & y;
  
  // printf("%d", answer);

  // EX 2

  // char x = 0b00001011;
  // char y = 0b00000101;
  // char mask = 0b00000001; 

  // // is x's last bit a 1 or 0?
  // if (x & mask) {
  //   printf("The x's last bit is equal to 1");
  // } else {
  //   printf("The x's last bit is equal to 0"); 
  // }

  // EX 3

  char x = 0b00001011;
  char y = 0b00000101;
  char mask = 0b00000100;   

  // is the bit selected by mask set in y?

  // if (y & mask) {
  //   printf("The third bit position of y is equal to 1");
  // } else {
  //   printf("The third bit position of y is equal to 0"); 
  // }

  // is the bit selected by mask set in x and y?

  // if ((y & mask) && (x & mask)) {
  //   printf("The third bit position of x and y is equal to 1");
  // } else {
  //   printf("The third bit position of either x or y is equal to 0"); 
  // }


  // Are x, y, and mask non-zero values?

  if ((y && mask) & (x && mask)) {                        // It does not work bit-by-bit
    printf("The x, y and mask are all non-zero values");  // It evaluates each operand as true or false
  } else {
    printf("The x, y and mask are all zero values"); 
  }

  return 0;
}