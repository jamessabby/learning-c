#include <stdio.h>

void birthday(int *age);

int main() {
  
  // Pointer = a variable that stores the memory address of another 
  //           variable rather than storing a direct value.

  int age = 25;
  int *pAge = &age;   // * = dereference operator, used to store a pointer
                       // "integer pointer named pAge is set to the address of age"

  birthday(pAge);

  printf("You are %d years old.", age);

  return 0;
}

void birthday(int *age) {
  (*age)++;

}