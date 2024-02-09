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

// int stvaranjeMatrice(int kolone, int vrste, int matrica[MAX][MAX])
// {
//   int i, j;
//   for (i = 0; i < vrste; i++)
//     for (j = 0; j < kolone; j++)
//     {
//       do
//       {
//         printf("Element [%d][%d]: ", i, j);
//         scanf("%d", &matrica[i][j]);
//       } while (matrica[i][j] > 3 || matrica[i][j] < 0);
//     }
//   return matrica[vrste][kolone];
// }

// void ispisivanjeMatrice(int vrste, int kolone, int matrica[MAX][MAX])
// {
//   int i, j;
//   for (i = 0; i < vrste; i++)
//   {
//     for (j = 0; j < kolone; j++)
//       printf("%d ", matrica[i][j]);
//     printf("\n");
//   }
// }

// char koraci()
// {
//   char korak;
//   while (korak != 'W' && korak != 'S' && korak != 'A' && korak != 'D' && korak != 'K')
//     scanf("%c", &korak);

//   return korak;
// }
/*
int main()
{
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
  --------------------------------------
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
  --------------------------------------
  int duzina, i, j;
  printf("Duzina: ");
  scanf("%d", &duzina);
  int niz[duzina];

  for (i = 0; i < duzina; i++)
  {
    printf("Element %d: ", i);
    scanf("%d", &niz[i]);
  }

  for (i = 0; i < duzina; i += 2)
  {
    int temp = niz[i];
    niz[i] = niz[i + 1];
    niz[i + 1] = temp;
  }

  for (i = 0; i < duzina; i++)
----------------------
//ISPIT VEZBE
 int n, k;
  printf("Unesi duzinu n:");
  scanf("%d", &n);

  int niz[n + 1];
  int maks = 0;
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &niz[i]);

    for (int j = 0; j < i; j++)
    {
      if (niz[i] > niz[maks])
        maks = i;
    }
  }

  printf("%d", maks);

  printf("Unesi broj k:");
  scanf("%d", &k);
  int brojac = n;
  for (int i = n + 1; i >= 0; i--)
  {

    if (i != maks + 1)
    {
      niz[i] = niz[brojac];
      brojac--;
    }
    else
    {
      niz[i] = k;
      break;
    }
  }
  printf("\nnovi niz");

  for (int i = 0; i < n + 1; i++)
    printf("\n%d", niz[i]);

  -----------------------------
  int n;
  printf("Unesi broj n:");
  scanf("%d", &n);
  int brojac = 0;
  int i, j, k;
  for (i = 0; i < 24; i++)
    for (j = 0; j < 60; j++)
      for (k = 0; k < 60; k++)
        if (i + j + k == n)
          printf("%d : %d : %d\n", i, j, k);

  -----------------------------
  int broj, temp;
  while (1)
  {
    int nadjen = 0;
    int brojac = 1;
    printf("Unesi broj: \n");
    scanf("%d", &broj);

    temp = broj;
    while (temp > 0)
    {
      if (temp % 10 == brojac)
      {
        nadjen = 1;
        break;
      }
      temp /= 10;
      brojac++;
    }
    if (!nadjen)
    {
      printf("Broj nije magican\n", broj);
      break;
    }
    else
      printf("Broj je magican\n", broj);
  }
  -----------------------------

  char rec1[MAX], rec2[MAX];
  printf("Unesi recenice: ");
  fgets(rec1, MAX, stdin);
  fgets(rec2, MAX, stdin);

  if (strlen(rec1) > strlen(rec2))
    return;

  puts(rec1);
  puts(rec2);

  int i, j;
  char temp;
  for (i = 0; i < strlen(rec1) - 1; i++)
    for (j = i + 1; j < strlen(rec1); j++)
    {
      if (rec1[i] > rec1[j])
      {
        temp = rec1[i];
        rec1[i] = rec1[j];
        rec1[j] = temp;
      }
    }
  for (i = 0; i < strlen(rec2) - 1; i++)
    for (j = i + 1; j < strlen(rec2); j++)
    {
      if (rec2[i] > rec2[j])
      {
        temp = rec2[i];
        rec2[i] = rec2[j];
        rec2[j] = temp;
      }
    }
  printf("%s", rec1);
  printf("%s", rec2);

  int brojac = 0;
  for (i = 0; i < strlen(rec2) - 1; i++)
    if (rec1[i] != rec2[i])
      brojac++;

  if (brojac)
    printf("\nNije");
  else
    printf("\nJeste");
  -----------------------------

  int a = 1, b = 2, i;
  printf("%d %d", a, b);

  for (i = 0; i < 18; i++)
  {
    int c = (3 * a) - (2 * b);
    printf(" %d ", c);
    a = b;
    b = c;
  }
  -----------------------------

  int budzeti, budzet;

  printf("Unesi koliko budzeta postoji: ");
  scanf("%d", &budzeti);

  int nizBudzeta[budzeti];
  int i, j;

  for (i = 0; i < budzeti; i++)
  {
    printf("Unesi budzet br. %d: ", i + 1);
    scanf("%d", &nizBudzeta[i]);
  }

  printf("Unesi svoj budzet: ");
  scanf("%d", &budzet);

  //modifikovanje niza tako da je rastuci
  for (i = 0; i < budzeti - 1; i++)
  {
    for (j = i + 1; j < budzeti; j++)
    {
      if (nizBudzeta[i] > nizBudzeta[j])
      {
        int temp = nizBudzeta[i];
        nizBudzeta[i] = nizBudzeta[j];
        nizBudzeta[j] = temp;
      }
    }
  }
  int suma = 0, brojac = 0;
  for (i = 0; i < budzeti; i++)
  {
    suma += nizBudzeta[i];

    if (suma > budzet)
      break;
    brojac++;
  }

  printf("\nBroj automobila koji se moze kupiti za ovaj novac je %d", brojac);
  -----------------------------
  float x, y;
  printf("Unesi x i y: ");
  scanf("%f %f", &x, &y);

  if ((x < 16.5 && x > 3.5 && y > 13.1 && y < 17.2) || (x < 12 && x > 8.1 && y > 8.5 && y < 21.5))
    printf("tacka je unutar.");
  else
  {
    printf("tacka je van. (%f) (%f)", x, y);
  }
  -----------------------------
  return 0;
} */
float srednja(int niz[MAX], int duzina)
{
  int i, suma = 0;
  for (i = 0; i < duzina; i++)
  {
    // printf("%d <--", niz[i]);
    suma += niz[i];
  }
  // printf("\n");
  return (float)suma / duzina;
}

// int main()
// {
/*
  int vrste;
  printf("Duzina: ");
  scanf("%d", &vrste);

  int i, j, matrica[vrste][vrste];
  for (i = 0; i < vrste; i++)
    for (j = 0; j < vrste; j++)
    {
      printf("element [%d][%d]", i, j);
      scanf("%d", &matrica[i][j]);
    }
  for (i = 0; i < vrste; i++)
  {
    for (j = 0; j < vrste; j++)
      printf("%d ", matrica[i][j]);
    printf("\n");
  }
  int transponovana[vrste][vrste];
  for (i = 0; i < vrste; i++)
    for (j = 0; j < vrste; j++)
      transponovana[i][j] = 0;
  for (i = 0; i < vrste; i++)
    for (j = 0; j < vrste; j++)
      transponovana[i][j] = matrica[j][i];

  printf("transponovana:\n");
  for (i = 0; i < vrste; i++)
  {
    for (j = 0; j < vrste; j++)
      printf("%d ", transponovana[i][j]);
    printf("\n");
  }
  float najmanjaKolona = srednja(transponovana[0], vrste);
  printf("\n");
  float najvecaKolona = srednja(transponovana[0], vrste);
  printf("\n");

  int najveciIndex = 0, najmanjiIndex = 0;
  for (i = 0; i < vrste; i++)
  {
    if (najmanjaKolona > srednja(transponovana[i], vrste))
    {
      printf("\nManji od %d kolone, %.2f, %.2f\n", i, najvecaKolona, srednja(transponovana[i], vrste));
      najmanjaKolona = srednja(transponovana[i], vrste);
      najmanjiIndex = i;
    }
    if (najvecaKolona < srednja(transponovana[i], vrste))
    {
      printf("\nVeca od %d kolone, %.2f, %.2f\n", i, najvecaKolona, srednja(transponovana[i], vrste));
      najvecaKolona = srednja(transponovana[i], vrste);
      najveciIndex = i;
    }
  }

  for (j = 0; j < vrste; j++)
  {
    int temp = matrica[j][najmanjiIndex];
    matrica[j][najmanjiIndex] = matrica[j][najveciIndex];
    matrica[j][najveciIndex] = temp;
  }

  printf("Vrsi se zamena %d i %d kolone!\nKrajnja matrica: \n", najmanjiIndex, najveciIndex);
  for (i = 0; i < vrste; i++)
  {
    for (j = 0; j < vrste; j++)
      printf("%d ", matrica[i][j]);
    printf("\n");
  }
--------------------------------------
int a, b;
printf("Unesi interval a -> b: ");
scanf("%d %d", &a, &b);

for (a; a < b; a++)
{
  int deljiv = 1;
  int temp = a / 10;
  if (a < 10)
    deljiv = 0;
  while (temp > 0)
  {
    if (temp % 10 == 0 || a / temp % 10 != 0)
    {
      deljiv = 0;
      break;
    }
    temp /= 10;
  }
  if (deljiv)
    printf("%d\n", a);
}
--------------------------------------
int broj;
printf("Unesi broj: ");
scanf("%d", &broj);

int sumaParnih = 0, sumaNeparnih = 0, brojac = 0;
while (broj > 0)
{
  if (brojac % 2 == 0)
    sumaParnih += broj % 10;
  else
    sumaNeparnih += broj % 10;
  brojac++;
  broj /= 10;
}
if (sumaParnih == sumaNeparnih)
  printf("Broj je savrsen.");
else
  printf("Broj nije savrsen");
--------------------------------------

int trazeni;
printf("Unesi index trazenog djaka: ");
scanf("%d", &trazeni);
while (trazeni > 9 && trazeni < 1)
  scanf("%d", &trazeni);

int i, j, brojac = 0;
{
  for (i = 0; i < 7; i++)
    for (j = 0; j < 9; j++)
    {
      int odgovor;
      printf("Da li je ucenik br.%d tacno odgovorio na %d. pitanje (da = 1, ne= 0)", j + 1, i + 1);
      scanf("%d", &odgovor);
      while (odgovor != 1 && odgovor != 0)
        scanf("%d", &odgovor);
      if (odgovor)
        printf("%d", j + 1);
      if (odgovor && i == trazeni - 1)
        brojac++;
    }
  printf("\n");
}
printf("Trazeni student je imao %d tacnih odgovora.\n", brojac);
--------------------------------------*/

// return 0;
// }

int stvaranjeMatrice(int matrica[MAX][MAX], int vrste, int kolone)
{
  int i, j;
  for (i = 0; i < vrste; i++)
    for (j = 0; j < kolone; j++)
    {
      printf("Element [%d][%d]: ", i, j);
      scanf("%d", &matrica[i][j]);
    }
  return matrica[vrste][kolone];
}
void ispisivanjeMatrice(int matrica[MAX][MAX], int vrste, int kolone)
{
  int i, j;
  for (i = 0; i < vrste; i++)
  {
    for (j = 0; j < kolone; j++)
      printf("%d ", matrica[i][j]);
    printf("\n");
  }
}
void pravljenjeNiza(
    int matrica[MAX][MAX], int vrste, int kolone)
{
  int i, j, niz[MAX], brojac = 0, centar;
  for (i = 0; i < vrste; i++)
  {
    niz[brojac] = matrica[i][0];
    brojac++;
  }
  int k = 1;
  for (i = vrste - 2; i >= 0; i--)
  {
    niz[brojac] = matrica[i][k];
    brojac++;
    if (k == i)
    {
      centar = i;
      break;
    }
    k++;
  }
  for (i = centar + 1; i < kolone; i++)
  {
    niz[brojac] = matrica[centar][i];
    brojac++;
  }

  printf("\n");

  for (i = 0; i < brojac; i++)
    printf("%d ", niz[i]);

  for (i = 0; i < brojac - 1; i++)
    for (j = i + 1; j < brojac; j++)
    {
      if (niz[j] > niz[i])
      {
        int temp = niz[i];
        niz[i] = niz[j];
        niz[j] = temp;
      }
    }
  printf("\n");

  for (i = 0; i < brojac; i++)
    printf("%d ", niz[i]);
}
int main()
{
  int vrste, kolone, matrica[MAX][MAX];
  printf("Vrste i kolone: ");
  scanf("%d %d", &vrste, &kolone);
  stvaranjeMatrice(matrica, vrste, kolone);
  ispisivanjeMatrice(matrica, vrste, kolone);

  pravljenjeNiza(matrica, vrste, kolone);
  return 0;
}