#include <stdio.h>
#include <stdlib.h>

int main() {

  // BEST USE: If you need an array but you don't know the size it's gonna be, you can use the malloc function to reserve some space in the heap. But make sure to free the memory when you're done with it and return the key by setting it back to null.

  int number = 0;
  printf("Enter the number of grades: ");
  scanf("%d", &number);

  char *grades = malloc(number * sizeof(char)); // // Allocate memory on the heap depending on what the user inputted

  if (grades == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
  }

  for (int i = 0; i < number; i++)
  {
    printf("Enter grade #%d: ", i + 1);
    scanf(" %c", &grades[i]);
  }

    for (int i = 0; i < number; i++)
  {
    printf("%c ", grades[i]);
  }
  
  free(grades);
  grades = NULL;

  return 0;
}