#include <stdio.h>

int main() {

  int arr[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

  char numpad[][4] = {{'1', '2', '3'}, 
                      {'4', '5', '6'}, 
                      {'7', '8', '9'}, 
                      {'*', '0', '#'}};
  
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", arr[i][j]);
    };
    printf("\n");
  }
  
  printf("\n");
  printf("Telephone number pad:\n");

  for (int k = 0; k < 4; k++) {
    for (int l = 0; l < 4; l++) {
      printf("%c ", numpad[k][l]);
    };
    printf("\n");
  }


  return 0;
}