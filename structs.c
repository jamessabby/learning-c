#include <stdio.h>
#include <stdbool.h>

// struct (structure) = a user-defined data type that allows you to 
//                      group together variables of different data types under a single name.

typedef struct {
  char name[50];
  int age; 
  float gpa;
  bool isFullTime;
} Student;

// ARRAY OF STRUCT

typedef struct {
  char model[20];
  int year;
  int price;
} Cars;

int main() {

  


  Student student1 = {"James", 20, 2.5, true};
  Student student2 = {"Elisha", 20, 3.5, true};

  printf("Structs Example: \n\n");

  printf("%s\n ", student1.name);
  printf("%d\n ", student1.age);
  printf("%.2f\n ", student1.gpa);
  printf("%s\n ", (student1.isFullTime) ? "Full time student" : "Part time student");

  printf("\n");

  printf("%s\n ", student2.name);
  printf("%d\n ", student2.age);
  printf("%.2f\n ", student2.gpa);
  printf("%s\n ", (student2.isFullTime) ? "Full time student" : "Part time student");

  printf("\n");

  printf("Array of Structs Example: \n\n");
  

  Cars cars[] = {{"Mustang", 2025, 32000}, 
                  {"Corvette", 2026, 68000}, 
                  {"Challenger", 2024, 29000}};
  
  int number = sizeof(cars) / sizeof(cars[0]);

  for (int i = 0; i < number; i++) {
    printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
  }

  return 0;
}