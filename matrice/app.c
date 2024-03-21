#include <stdio.h>
#include <math.h>

void stvaranjeMatrice(int vrste, int kolone, int matrica[vrste][kolone]);
void ispisivanjeMatrice(int vrste, int kolone, int matrica[vrste][kolone]);
void trazenjeElemenata(int vrste, int kolone, int matrica[vrste][kolone]);

int main()
{
  int vrste, kolone;
  printf("unesi vrste i kolone: ");
  scanf("%d %d", &vrste, &kolone);

  while (vrste % 2 == 0 || kolone % 2 == 0)
  {
    printf("Vrste i kolone moraju biti neparne duzine: ");
    scanf("%d %d", &vrste, &kolone);
  }

  int matrica[vrste][kolone];

  stvaranjeMatrice(vrste, kolone, matrica);
  ispisivanjeMatrice(vrste, kolone, matrica);
  trazenjeElemenata(vrste, kolone, matrica);

  return 0;
}

void stvaranjeMatrice(int vrste, int kolone, int matrica[vrste][kolone])
{
  int i, j;
  for (i = 0; i < vrste; i++)
    for (j = 0; j < kolone; j++)
    {
      printf("Element [%d][%d]: ", i, j);
      scanf("%d", &matrica[i][j]);
    }
}
void ispisivanjeMatrice(int vrste, int kolone, int matrica[vrste][kolone])
{
  int i, j;
  for (i = 0; i < vrste; i++)
  {
    for (j = 0; j < kolone; j++)
      printf("%d ", matrica[i][j]);
    printf("\n");
  }
}
void trazenjeElemenata(int vrste, int kolone, int matrica[vrste][kolone])
{
  int i, j, k = 0;
  int nizElemenata[100];
  for (i = 0; i < vrste; i++)
  {
    nizElemenata[k] = matrica[i][0];
    k++;
  }

  int b = 1, centar = floor(vrste / 2);

  for (i = vrste - 2; i >= floor(vrste / 2); i--)
  {
    nizElemenata[k] = matrica[i][b];
    b++;
    k++;
  }
  for (i = centar + 1; i < kolone; i++)
  {
    nizElemenata[k] = matrica[centar][i];
    k++;
  }

  printf("Niz elemenata: ");
  for (i = 0; i < k; i++)
    printf("%d, ", nizElemenata[i]);
}
