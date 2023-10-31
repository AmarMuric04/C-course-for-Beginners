#include <stdio.h>
#include <math.h>

int main()
{ /*
   float a;
   printf("Unesite bilo koji realan broj: ");
   scanf("%f", &a);

   printf("Broj zaokruzen na dve decimale je %.2f", a);
   -------------------------------------------------------

  int a;
  printf("broj: ");
  scanf("%d", &a);

  printf("%d\n", a);
  printf("%o\n", a);
  printf("%x\n", a);
  ---------------------------------------------------------

  float a;
  printf("Unesi bilo koji realan broj: ");
  scanf("%f", &a);

  printf("%.0f", a);
  printf("\n%f", ceil(a));
  printf("\n%f", floor(a));
  ----------------------------
  char A = 'A';
  char B = 'B';
  char C = 'C';
  char D = 'D';
  char E = 'E';
  printf("%2c\n", A);
  printf("%4c\n", B);
  printf("%6c\n", C);
  printf("%8c\n", D);
  printf("%10c\n", E);
  ----------------------------


  int broj, i;
  long f = 1;
  printf("Unesi ceo broj: ");
  scanf("%d", &broj);

  for (i = 1; i <= broj; i++)
    f *= i;
  printf("Unesi ceo broj:%ld ", f);
  -----------------------------------

  int n;
  int S = 0;
  int i;
  int f = 1;

  printf("n= ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    f *= i;
    S += f;
  }
  printf("Suma faktorijala broja je: %d", S);
---------------------------------------------

  int n, i, m, P = 1, Sp;
  //A)
  // S= n(n+m)*(n+2m)...

  printf("n i m = ");
  scanf("%d %d", &n, &m);
  for (i = 0; i <= m; i++)
  {
    Sp = n + i * m;
    P *= Sp;
  }
  printf("proizvod je %d", P);

B)
  int i, m, n, z;
  float S;
  printf("n= ");
  scanf("%d", &n);
  printf("m= ");
  scanf("%d", &m);

  S = 0;
  z = 1;
  for (i = 1; i <= m; i++)
  {
    S += (float)z / (n + i * m);
    z = -z;
  }
  printf("\nS = %.5f\n", S);
  --------------------------------------

  int i, n, f = 1;
  float Sp = 0;
  float S = 0;
  // A)
  printf("n: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    f *= i;
    Sp += 1. / (1 / 1 + i);
    S += f / Sp;
  }
  printf("zbir je %f", S);
  ------------------------------*/

  int i, n, f = 1;
  float Sp = 0;
  float S = 0;
  int z = 1;
  // B)
  printf("n: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    f *= i;
    Sp += i;
    S += z * Sp / f;
    z = -z;
  }
  printf("zbir je %f", S);

  return 0;
}