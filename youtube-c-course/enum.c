#include <stdio.h>
#include <stdbool.h>

typedef enum {
  SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY 
} Day;

typedef enum {
  SUCCESS, FAILURE, PENDING
} Status;

void connectStatus(Status status);  // function prototype

int main() {

  Day today = SATURDAY;

  if (today == SATURDAY || today == SUNDAY) {
    printf("Today is weekend\n");
  } else {
    printf("Today is weekday\n");
  }

  Status status = SUCCESS;
  connectStatus(status);

  return 0;
}

void connectStatus(Status status) {

  // if (status == SUCCESS) {
  //   printf("Connection was successfull\n")
  // } else if (status == FAILURE) {
  //   printf("Could not connect.\n");
  // } else {
  //   printf("Connecting...\n");
  // }

  switch (status)

  {
  case SUCCESS:
    printf("Connection was successfull!\n");
    break;
  case FAILURE:
    printf("Could not connect.\n");
    break;
  case PENDING:
    printf("Connecting...\n");
    break;
  
  default:
    break;
  }
} 