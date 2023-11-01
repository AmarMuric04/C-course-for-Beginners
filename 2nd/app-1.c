#include <stdio.h>
#include <math.h>

int main()
{
  /*
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
  ------------------------------

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
  ------------------------------

  int i, x, n;
  float S = 0;
  // B)
  printf("x: ");
  scanf("%f", &x);
  printf("n: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {

  }
  printf("zbir je %f", S);
  ----------------------------
  int n, i;
  float S = 1;
  float q = 0;
  printf("n: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    q = sqrt(q + 2);
    S *= 1 / q;
  }
  printf("proizvod %f", S);
  ----------------------------

  int n, S = 0;

  printf("n: ");
  scanf("%d", &n);

  int i = 0;
  while (i < n)
  {
    i++;
    S += i;
  };
  printf("%d", S);
    ----------------------------

  int n, S = 0;

  printf("n: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i += 3)
  {
    S += i;
  }
  printf("%d", S);
 ----------------------------

  int n;
  float S = 0;
  printf("n: ");
  scanf("%d", &n);

  int i = 1;
  while (i <= n)
  {
    S += 1 / pow(2 * i + 1, 2);
    i++;
  };
  printf("zbir %f", S);
  ------------------------
  int n, m;
  long S = 0;
  printf("upisi n: ");
  scanf("%d", &n);
  printf("upisi m: ");
  scanf("%d", &m);
  if (n < m)
  {
    while (n <= m)
    {
      if (n % 2 == 0)
        S += pow(n, 2);
      else
        S += pow(n, 3);
      n++;
    }
    printf("%d\n", S);
  }
  else
  {
    printf("Broj m je manji od broja n");
  }
  ------------------------------

  int n, a, b;

  printf("Unesi broj i broj na koji ce prvi broj biti: ");
  scanf("%d %d", &n, &a);
  b = pow(n, a);
  printf("%d", b);
  -------------------------------------
  printf("%d", 5 * 5 * 5);
  ------------------------------------

  int ABC, a, b, c, ABCdva;
  printf("Trocifreni broj: ");
  scanf("%d", &ABC);
  printf("Trocifreni broj: ");
  scanf("%d", &ABCdva);

  a = ABC / 100;
  b = (ABC / 10) % 10;
  c = ABC % 10;

  if (ABC > ABCdva)
    printf("%d", ABC - ABCdva);
  else
    printf("%d", ABCdva - ABC);
    ------------------------------
  int i;
  for (int i = 1; i <= 1000; i++)
  {
    int S = 0;
    for (int j = 1; j < i; j++)
    {
      if (i % j == 0)
      {

        S += j;
        if (S == i)
        {
          printf("%d\n", j);
          printf("%d\n", i);
          printf("%d\n", S);
        }
      }
    }
  }

  int k, n;
  printf("Da li je broj perfektan?\nUnesi broj i vidi!\n");
  scanf("%d", &n);

  int Sp = 0;
  for (int k = 1; k < n; k++)
  {
    if (n % k == 0)
    {
      Sp += k;
    }
  }
  if (Sp == n)
    printf("Vas broj je perfektan ( %d )!", Sp);
  else
    printf("Vas broj nije perfektan ( %d )!", n);
    ----------------------------------------

  int a, b, c;

  for (int i = 100; i < 1000; i++)
  {
    a = i / 100;
    b = (i / 10) % 10;
    c = i % 10;

    if (i % (a * 10 + c) == 0)
      printf("%d%d%d\n", a, b, c);
  }
----------------------------------------------
  // AB - SATI, CD - MINUTI, EF - SEKUNDE

  int a, b, c, n;
  printf("n: ");
  scanf("%d", &n);
  for (a = 0; a <= 23; a++)
    for (b = 0; b <= 59; b++)
      for (c = 0; c <= 59; c++)
        if ((a % 10) + (a / 10) + (b % 10) + (b / 10) + (c % 10) + (c / 10) == n)
          printf("%d sat %d min %d sec\n", a, b, c);
------------------------------------------------------------- */
  return 0;
}