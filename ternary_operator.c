#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

  // bool isAura = false;

  // return (isAura)? printf("Bro is aura farming!") : printf("Your are not that guy");

  int hours = 11;
  int minutes = 30;

  printf("%d:%d %s", hours, minutes, (hours > 12) ? "PM" : "AM");

  return 0;
}