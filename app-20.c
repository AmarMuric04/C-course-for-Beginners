#include <stdio.h>

int main()
{
  int luckyNumbers[] = {4, 8, 15, 16, 23, 42};

  int i = 0;
  while (i < 5)
  {
    i++;
    printf("%d\n", i);
  }
  for (int i = 1; i < 6; i++)
  {
    printf("%d\n", luckyNumbers[i]);
  }
  return 0;
}