#include <stdio.h>

int main() {

  int *p; // * declares pointer not a normal variable
  int x, y;

  p = &x; // & means we want the address of the variable x
  y = *p; // * is the dereference operator, this is the same as y = x because *p is pointing to x

  return 0;
}