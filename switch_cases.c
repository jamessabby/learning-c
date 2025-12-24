#include <stdio.h>
#include <string.h>

int main() {

  int number = 0;

  printf("Enter a number from 1 t 7: ");
  scanf("%d", &number);

  switch(number) {
    case 1:
      printf("Today is Monday");
      break;

    case 2:
      printf("Today is Tuesday");
      break;

    case 3:
      printf("Today is Wednesday");
      break;

    case 4:
      printf("Today is Thursday");
      break;

    case 5:
      printf("Today is Friday");
      break;
    
    case 6:
      printf("Today is Saturday");
      break;

    case 7:
      printf("Today is Friday");
      break;
  }

  return 0;
}