#include <stdio.h>
#include <string.h>

int main() {

  // char fruits[][10] = {"Apple", "Banana", "Coconut"};

  // int size = sizeof(fruits) / sizeof(fruits[0]);

  // fruits[0][0] = 'e';
  // fruits[0][4] = 'A';

  // fruits[1][0] = 'a';
  // fruits[1][5] = 'B';

  // fruits[2][0] = 't';
  // fruits[2][6] = 'C';

  // for (int i = 0; i < size; i++) {
  //   printf("%s\n", fruits[i]);
  // }

  // printf("\n");

  char players[5][30] = {0};

  for (int i = 0; i < 5; i++) {
    printf("Enter 5 NBA players you know: ");
    fgets(players[i], sizeof(players[0]), stdin);
    players[i][strlen(players[i]) - 1] = '\0';
  }

  printf("\n");

  printf("The 5 players you know are: \n");
  for (int i = 0; i < 5; i++) {
    printf("%s\n", players[i]);
  }

  return 0;
}