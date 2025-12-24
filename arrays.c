#include <stdio.h>
#include <string.h>

int main() {

  int numbers[] = {10, 20, 30, 40, 50, 60, 70};

  printf("Random element from the array: %d\n\n", numbers[4]);

  printf("Size of bytes of an array: %d\n\n", sizeof(numbers));
  printf("Size of bytes of one element in an array: %d\n\n", sizeof(numbers[0]));
  
  printf("If we divide each other we get the\n");
  int numberOfElements = sizeof(numbers)/ sizeof(numbers[0]); // I determined its size in bytes and use the division to calculate the number of elements:
  printf("Number of elements in this array: %d\n\n", numberOfElements);

  printf("Here are all the elements inside the array: ");
  for (int i = 0; i < numberOfElements; i++) {
    printf("%d ", numbers[i]);
  }
  return 0;
}