#include <stdio.h>
#include <string.h>

int hello(char name[], int age); // function prototype

int main(void) {

  hello("James Sabio", 20);

  return 0;
}

int hello(char name[], int age){
  printf("Hello %s\n", name);
  printf("You are %d years old.", age);
}