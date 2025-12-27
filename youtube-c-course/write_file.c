#include <stdio.h>

int main() {
  
  FILE *pFile = fopen("C:\\Users\\James\\OneDrive\\Desktop\\output.txt", "w");

  if (pFile == NULL) {
    printf("Error opening file\n");
    return 1;
  } 

  char text[] = "HELLO WORLD\n THIS IS A WRITE FILE TEST";

  fprintf(pFile, "%s", text);

  fclose(pFile);

  printf("Created the file successfully!");

  return 0;
}
