#include <stdio.h>

int main() {

  int x[5] = {1,2,3,4,5};

  int *p;

  // p = x;    // This looks like a variable assignment

  p = &x;     // This looks like a pointer

  return 0;
}