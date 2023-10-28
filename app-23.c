#include <stdio.h>

int main()
{

  FILE *fpointer = fopen("employees.txt", "w");

  fprintf(fpointer, "Hello");

  fclose(fpointer);
  return 0;
}