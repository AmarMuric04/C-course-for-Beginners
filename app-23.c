#include <stdio.h>

int main()
{
  char line[255];

  FILE *fpointer = fopen("employees.html", "r");

  // fprintf(fpointer, "Hello");

  fgets(line, 255, fpointer);
  printf("%s", line);

  fclose(fpointer);
  return 0;
}