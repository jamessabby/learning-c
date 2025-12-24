#include <stdio.h>
#include <string.h>

int main() {
  int grades[5] = {0};


  for (int i = 0; i < 5; i++) {
    printf("Enter your grades: ");
    scanf("%d", &grades[i]);
  }

  printf("Your grades are: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", grades[i]);
  }
}