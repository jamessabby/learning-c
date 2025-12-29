#include <stdio.h>

int main() {

  
  int x = 5;
  int y = 2;
  float answer;

  answer = x / y;
  printf("%f\n\n", answer);

  // implicit type conversion - a becomes promoted temporarily as a float  
  // float is larger type than int so the smaller one gets promoted to the type of larger one

  int a = 5;
  float b = 2;
  float ans;

  ans = a / b;
  printf("%f\n\n", ans);

  short num1 = 5;
  int num2;

  // num2 = num1 * 2L;  // num1 is promoted from short to long
  // num2 = num1 / 4;   // 4 is also a signed short integer, so there's no type conversion here
  num2 = num1 / 4.0;    // num1 is promoted into a float, but it became signed integer in the end because num2 cannot store decimals

  printf("%d\n", num2);
  return 0;
}