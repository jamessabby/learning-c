#include <stdio.h>
#include <string.h>

int main() {

  char adjective1[20] = "";
  char noun[30] = "";
  char adjective2[20] = "";
  char verb[20] = "";
  char adjective3[20] = "";

  printf("Enter an adjective (description): ");
  fgets(adjective1, sizeof(adjective1), stdin);

  adjective1[strlen(adjective1) - 1] = '\0';

  printf("Enter a noun (animal or person): ");
  fgets(noun, sizeof(noun), stdin);

  noun[strlen(noun) - 1] = '\0';

  printf("Enter an adjective (description): ");
  fgets(adjective2, sizeof(adjective2), stdin);
  
  adjective2[strlen(adjective2) - 1] = '\0';

  printf("Enter an verb (ending w/ -ing): ");
  fgets(verb, sizeof(verb), stdin);

  verb[strlen(verb) - 1] = '\0';

  printf("Enter an adjective (description): ");
  fgets(adjective3, sizeof(adjective3), stdin);

  adjective3[strlen(adjective3) - 1] = '\0';

  printf("\n");

  printf("Today I went to a %s zoo.\n", adjective1);
  printf("In an exhibit, I saw a %s.\n", noun);
  printf("%s was %s and %s!\n", noun, adjective2, verb);
  printf("I was %s!\n", adjective3);

  return 0;
}