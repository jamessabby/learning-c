#include <stdio.h>
#include <string.h>


void happyBirthday(char name[], int age) {
  printf("\nHappy Birthday %s!", name);
  printf("\nYou are now %d years old!", age);
}

int main(void) {

  char name[50] = "";
  int age = 0;

  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);

  name[strlen(name) - 1] = '\0';

  printf("Enter your age: ");
  scanf("%d", &age);

  happyBirthday(name, age);

   return 0;
}