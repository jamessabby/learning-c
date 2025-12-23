#include <stdio.h>
#include <string.h>

int main(void) {

  // SHOPPING CART PROGRAM  

  // my code

  // char item[30] = "";
  // float price = 0.0f;
  // int quantity = 0;

  // printf("What item would you like to buy?: ");
  // scanf("%s",&item);

  // printf("What is the price for each?: ");
  // scanf("%f", &price);

  // printf("How many would you like?: ");
  // scanf("%d", &quantity);

  // float total = quantity * price;

  // printf("\n");

  // printf("You have bought %d %s/s\n", quantity, item);
  // printf("The total is: $%.2f", total);

  // tutorial code

  char item[50] = "";
  float price = 0.0f;
  int quantity = 0;
  char currency = '$';
  float total = 0.0f;

  printf("What item would you like to buy?: ");
  fgets(item, sizeof(item), stdin);

  item[strlen(item) - 1] = '\0'; 

  printf("What is the price for each?: ");
  scanf("%f", &price);

  printf("How many would you like?: ");
  scanf("%d", &quantity);

  total = price * quantity;

  printf("\n");

  printf("You have bought %d %s/s\n", quantity, item);
  printf("The total price is: %c%.2f", currency, total);

  return 0;
}