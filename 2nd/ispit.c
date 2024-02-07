#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define pi 3.1415926
#define max 100;
#define MAX 100
#define MAX_ROWS 10
#define MAX_COLS 10
#define MAX_ROWS_A 10
#define MAX_COLS_A 10
#define MAX_ROWS_B 10
#define MAX_COLS_B 10
#define REDOVI 5
#define KOLONE 5

int stvaranjeMatrice(int kolone, int vrste, int matrica[MAX][MAX])
{
  int i, j;
  for (i = 0; i < vrste; i++)
    for (j = 0; j < kolone; j++)
    {
      do
      {
        printf("Element [%d][%d]: ", i, j);
        scanf("%d", &matrica[i][j]);
      } while (matrica[i][j] > 3 || matrica[i][j] < 0);
    }
  return matrica[vrste][kolone];
}

void ispisivanjeMatrice(int vrste, int kolone, int matrica[MAX][MAX])
{
  int i, j;
  for (i = 0; i < vrste; i++)
  {
    for (j = 0; j < kolone; j++)
      printf("%d ", matrica[i][j]);
    printf("\n");
  }
}

char koraci()
{
  char korak;
  while (korak != 'W' && korak != 'S' && korak != 'A' && korak != 'D' && korak != 'K')
    scanf("%c", &korak);

  return korak;
}

int main()
{
  /*
  char korak;
  int kupus = 0, skok = 0;
  int vrste, kolone, matrica[MAX][MAX];
  printf("Unesi vrste:");
  scanf("%d", &vrste);
  printf("Unesi kolone:");
  scanf("%d", &kolone);

  stvaranjeMatrice(kolone, vrste, matrica);
  ispisivanjeMatrice(vrste, kolone, matrica);

  printf("Igra pocinje, zeka se nalazi na mestu [0][0]");
  int i = 0, j = 0;

  while (korak != 'K')
  {
    printf("Unesi korak (W, S, A, D):");

    korak = koraci();

    if (korak == 'W' && i != 0)
    {
      skok++;
      i--;
      printf("\nZec je na poziciji [%d][%d]\n", i, j);

      if (matrica[i][j] == 0)
        kupus++;
    }
    else if (korak == 'A' && j != 0)
    {
      skok++;
      j--;
      printf("\nZec je na poziciji [%d][%d]\n", i, j);

      if (matrica[i][j] == 0)
        kupus++;
    }
    else if (korak == 'S' && i != vrste - 1)
    {
      skok++;
      i++;
      printf("\nZec je na poziciji [%d][%d]\n", i, j);

      if (matrica[i][j] == 0)
        kupus++;
    }
    else if (korak == 'D' && j != kolone - 1)
    {
      skok++;
      j++;
      printf("\nZec je na poziciji [%d][%d]\n", i, j);

      if (matrica[i][j] == 0)
        kupus++;
    }
  }
  printf("\nBroj kupusa sakupljenih: %d", kupus);
  printf("\nBroj skokova: %d", skok);
  printf("\nKupusa po skoku: %.3f", (float)kupus / skok);
  */

 
  return 0;
}