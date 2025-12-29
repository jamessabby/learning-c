#include <stdio.h>

int sum(int *n);  // function prototype

void swap(int *n1, int *n2);

int main() {

  int x = 4, y = 1;
  // int result;

  // result = sum(&x);

  // printf("The square of is: %d", result);

  swap(&x, &y);

  printf("The new swapped value of x = %d\n", x);
  printf("The new swapped value of y = %d\n", y);

  return 0;
}

// gets the original value of x as a paremeter then squares it
int sum(int *n) {   
  return *n *= *n;
}

void swap(int *n1, int *n2) {
  int temp;

  temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}
