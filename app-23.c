#include <stdio.h>
#include <stdlib.h>

int main()
{
  char line[255];

  FILE *fpointer;

  fpointer = fopen("file.txt", "a");

  fprintf(fpointer, "\nThis was written using fprintf\n");

  fputs("LoooL\n", fpointer);

  // fgets(line, 255, fpointer);
  // fgets(line, 255, fpointer);
  // printf("%s", line);

  fclose(fpointer);
  return 0;
}