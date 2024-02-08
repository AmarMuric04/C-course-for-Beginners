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
  --------------------------------------

  char rec[MAX];

  printf("Unesi palindrom:");
  scanf("%s", rec);

  int i, duzina = strlen(rec), brojac = 0;
  for (i = 0; i < duzina / 2; i++)
    if (rec[i] != rec[duzina - i - 1])
      brojac++;

  if (brojac)
    printf("Nije palindrom.");
  else
    printf("Jeste palindrom");
  --------------------------------------
  char rec[MAX];
  printf("Unesi palindrom:");
  gets(rec);
  puts(rec);

  int i,
      duzina = strlen(rec), brojRazmaka = 0, j = 0;
  for (i = 0; i < duzina; i++)
    if (rec[i] == ' ')
      brojRazmaka++;

  char bezRazmaka[duzina - brojRazmaka];

  for (i = 0; i < duzina; i++)
    if (rec[i] != ' ')
    {
      bezRazmaka[j] = rec[i];
      j++;
    }

  printf("%d a\n", brojRazmaka);
  int brojac = 0;
  for (i = 0; i < (duzina - brojRazmaka) / 2; i++)
  {
    if (bezRazmaka[i] != bezRazmaka[duzina - brojRazmaka - i - 1])
      brojac++;
  }

  if (brojac)
    printf("Recenica nije palindrom.");
  else
    printf("Recenica jeste palindrom");
  --------------------------------------
  int duzinaSpiska;
  printf("Duzina spiska:");

  scanf("%d", &duzinaSpiska);
  getchar();
  char nizImena[MAX][MAX];
  int i, j;
  char temp[MAX];
  for (i = 0; i < duzinaSpiska; i++)
  {
    printf("\nIme broj %d:", i);
    fgets(nizImena[i], MAX, stdin);
  }

  for (i = 0; i < duzinaSpiska - 1; i++)
    for (j = i + 1; j < duzinaSpiska; j++)
    {
      if (strcmp(nizImena[i], nizImena[j]) > 0)
      {
        strcpy(temp, nizImena[i]);
        strcpy(nizImena[i], nizImena[j]);
        strcpy(nizImena[j], temp);
      }
    }

  for (i = 0; i < duzinaSpiska; i++)
    puts(nizImena[i]);
  --------------------------------------
  char recenica[MAX];
  fgets(recenica, MAX, stdin);
  int i, j, brojac = 0, indeks, najvise = 0;
  for (i = 0; i < strlen(recenica) - 1; i++)
  {
    brojac = 1;
    for (j = i + 1; j < strlen(recenica); j++)
    {
      if (recenica[i] != ' ' && recenica[i] == recenica[j])
      {
        brojac++;
        if (brojac > najvise)
        {
          najvise = brojac;
          indeks = i;
        }
      }
    }
  }

  printf("Najvise istih slova %c (%d).", recenica[indeks], najvise);
  --------------------------------------
  int duzina;
  printf("Unesi duzinu nizova:");
  scanf("%d", &duzina);
  int nizA[duzina], nizB[duzina];
  int i;
  for (i = 0; i < duzina; i++)
  {
    printf("Prvi niz, element %d:", i + 1);
    scanf("%d", &nizA[i]);
  }
  for (i = 0; i < duzina; i++)
  {
    printf("Drugi niz, element %d:", i + 1);
    scanf("%d", &nizB[i]);
  }
  int nizC[duzina];
  printf("Niz C: ");
  for (i = 0; i < duzina; i++)
  {
    if (nizA[i] > nizB[i])
      nizC[i] = nizB[i];
    else if (nizB[i] > nizA[i])
      nizC[i] = nizA[i];
    else
      nizC[i] = 0;
    printf("%d", nizC[i]);
  }
  --------------------------------------*/
  int duzina;
  printf("Unesi duzinu nizova:");
  scanf("%d", &duzina);
  int i, niz[duzina], niz2[duzina];
  for (i = 0; i < duzina; i++)
  {
    printf("Unesi element %d: (PRVI NIZ)", i);
    scanf("%d", &niz[i]);
  }
  for (i = 0; i < duzina; i++)
  {
    printf("Unesi element %d: (DRUGI NIZ)", i);
    scanf("%d", &niz2[i]);
  }
  int suma = 0;
  for (i = 0; i < duzina; i++)
    suma += niz[i] * niz2[i];
  printf("%d", suma);
  return 0;
}