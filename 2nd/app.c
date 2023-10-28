#include <stdio.h>

int main()
{

  int array[5][2] = {
      {1, 2},
      {3, 4},
      {5, 6},
      {7, 8},
      {9, 10},
  };

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%d", array[i][j]);
      for (int k = 3; k < 5; k++)
      {
        printf("%d", array[k][j]);
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}