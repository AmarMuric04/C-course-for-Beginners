#include <stdio.h>
#include <math.h>
#define pi = 3.1415926

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
    for (int j = 1; j <= i; j++)
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
-------------------------------------------------------------

  int n;
  float m, S = 0, average;
  printf("Unesi koliko dug ce biti niz n: ");
  scanf("%d", &n);
  int i = 1;

  while (i <= n)
  {
    i++;
    if (m == 0)
    {
      break;
    }
    printf("Unesi bilo koji broj sem NULE: ");
    scanf("%f", &m);

    S += m;
    average = S / n;
  }
  printf("Suma vasih unetih brojeva je %f\nAritmeticki niz vasih unetih brojeva je %f", S, average);
  ------------------------------------------------------------------------------

  int n;
  float m, S = 0, average;
  printf("Unesi koliko dug ce biti niz n: ");
  scanf("%d", &n);
  int i = 1;

  while (i <= n)
  {
    i++;
    if (m == 0)
    {
      break;
    }
    printf("Unesi bilo koji broj sem NULE: ");
    scanf("%f", &m);
    if (m >= 2 && m <= 6)
    {
      S += m;
      average = S / n;
    }
  }
  printf("Suma vasih unetih brojeva je %f\nAritmeticki niz vasih unetih brojeva je %f\n(samo za brojeve koji su >= 2 && <=6)", S, average);
---------------------------------------------------------------------------
5.12. Саставити програм који ће учитати два броја m и n. Оба броја треба да буду природна. Ако
тај услов није испињен, учитавање треба поновити. Ако је n<m, заменити m са n. Наћи и исписати
суму квадратних корена свих непарних бројева од m до n

  int n, m;
  float S = 0;
  int n2;
  printf("Unesite n: ");
  scanf("%d", &n);
  printf("Unesite m: ");
  scanf("%d", &m);
  if (m > 0 && n > 0)
  {
    if (m > n)
    {
      n2 = m;
      m = n;
    }
    for (int i = m; i <= n2; i++)
    {
      if (i % 2 != 0)
      {
        S += sqrt(i);
      }
    }
    printf("%.3f", S);
  }
  else
  {
    printf("Unesite m i n: ");
    scanf("%d %d", m, n);
  }
  --------------------------------------
Саставити програм којим се за унето n рачуна сума:
  float S = 0;
  int n;
  int znak = 1;
  printf("n: ");
  scanf("%d", &n);

  int i = 1;
  while (i <= n)
  {

    S += (float)znak / i;
    znak = -znak;
    i++;
  }
  printf("%.3f\n", S);
-----------------------------------------
. Саставити програм којим се исписује највећи заједнички делилац (NZD) бројева a и b
помоћу Еуклидовог алгоритма:
- ако је a=b, тада је NZD=a и то је крај алгоритма;
- ако је а≠b, тада од већег броја одузимамо мањи и враћамо се на први корак.

  int NZD, a, b, max, c;

  printf("a, b: ");
  scanf("%d %d", &a, &b);

  while (a != b)
    if (a > b)
      a -= b;
    else
      b -= a;

  printf("NZD je %d", a);
  ---------------------------------------------
  int a, b, c;

  for (a = 1; a <= 9; a++)
    for (b = 0; b <= 9; b++)
      for (c = 0; c <= 9; c++)
        if ((a * 100 + b * 10 + c) % (a + b + c) == 0)
          printf("%d%d%d je Nivenov broj\n", a, b, c);
---------------------------------------------------------
Саставити програм којим се исписују сви Питагорини бројеви а, b и c за 1 20 ≤ ≤ a ,
1 20 ≤ ≤ b . Бројеви су Питагорини ако важи: a2+b2=c2
.
  int a, b, c, e, d, f;

  printf("a,b i c: ");
  scanf("%d %d %d", &a, &b, &c);
  f = ceil(pow(a, 2));
  d = ceil(pow(b, 2));
  e = ceil(pow(c, 2));
  if (f + d == e)
    printf("brojevi %d i %d su pitagurini brojevi", a, b);
  else
    printf("broj nije pitagorin");



  int a, b, c, S = 1;

  for (a = 1; a <= 20; a++)
    for (b = 1; b <= 20; b++)
    {
      S = a * a + b * b;
      c = 1;
      while (c * c <= S)
      {
        if (c * c == S)
          printf("%d + %d = %d\n", a, b, c);
        c++;
      }
    }
---------------------------------------
Саставити програм који ће пет пута исписати реченицу Pozdrav svima! употребом DO
WHILE петље.
  int i = 0;
  do
  {
    printf("Pozdrav svima!\n");
    i++;
  } while (i < 6);
  -------------------------------------

  int h, m, s, q;

  printf("Unesi sekunde");
  scanf("%d", &q);

  s = q % 60;
  m = q / 60;
  h = m / 60;
  m = m % 60;
  h = h % 60;

  printf("%d %d %d", h, m, s);
---------------------------------------------------------
  int p, n, q, q2;
  float S = 0;
  float Sn = 0;
  printf("unesi p i niz n");
  scanf("%d %d", &p, &n);

  for (int i = 0; i <= p - 1; i++)
  {
    printf("Unesi broj");
    scanf("%d", &q);
    i < p - 1 ? S += q : -1;
  }
  for (int i = p + 1; i <= n; i++)
  {
    printf("Unesi broj");
    scanf("%d", &q2);
    Sn += q2;
  }

  printf("%.0f %.0f", S, Sn);
  S == Sn ? printf("\nBrojevi su jednaki") : printf("\nBrojevi nisu jednaki");
  // for (int i; i < n; i++)
  // {
  //   printf("Unesi broj");
  //   scanf("%d", &q);

  // }

------------------------------------------

  int a, b, i, br = 0;
  printf("Unesi a i b\n");
  scanf("%d %d", &a, &b);
  if (a > b)
  {
    for (i = 1; i < a; i++)
    {
      if (a % i == 0 && b % i == 0 && i > 1)
      {
        br++;
      }
    }

    br == 0
        ? printf("Brojevi jesu uzajamno prosti")
        : printf("Brojevi nisu uzajamno prosti");
  }
  else if (b > a)
  {

    for (i = 1; i < b; i++)
    {
      if (a % i == 0 && b % i == 0 && i > 1)
      {
        br++;
      }
    }

    br == 0
        ? printf("Brojevi jesu uzajamno prosti")
        : printf("Brojevi nisu uzajamno prosti");
  }
-------------------------------------------------------
//FIBONACIJEV NIZ

  int i, a = 0, b = 1, c, n;

  printf("Unesi duzinu niza: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    printf(" %d", c);
    a = b;
    b = c;
    c = a + b;
  }
  ---------------------------------------------------

  int i, j;

  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5; j++)
    {
      printf("* ");
    }
    printf("\n");
  }

  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= i; j++)
      printf("* ");
    printf("\n");
  }

  for (i = 1; i <= 4; i++)
  {
    for (j = 1; j <= 5; j++)
    {
      if (j > 1 && j < 5 && i > 1 && i < 4)
      {
        printf("  ");
      }
      else
        printf("* ");
    }
    printf("\n");
  }
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= i; j++)
      if (i == 3 && j == 2 || i == 4 && j > 1 && j < 4)
      {
        printf("  ");
      }
      else
        printf("* ");
    printf("\n");
  }
  for (i = 1; i <= 5; i++)
  {
    for (j = 5; j >= i; j--)
      printf("* ");
    printf("\n");
  }
---------------------------------------------------
//OKRENI BROJ NAOPAKO
  int n, m;
  float a;
  printf("n: ");
  scanf("%d", &n);
  m = n;
  while (m > 0)
  {
    a = a * 10 + m % 10;
    m = m / 10;
  }
  printf("%.0f", a);
  ------------------------------------------------------

  int n, i = 0;
  printf("n: ");
  scanf("%d", &n);
  while (n > 0)
  {
    n = n / 10;
    i++;
  }
  printf("%d", i);
  -------------------------------------------------------
 4.13  // ISPISATI BROJEVE PRVE STOTINE KOJI SU DELJIVI SA 6 I SUMU NJIGOVIH CIFARA
  int i, a, b, c;
  float s = 0, sukupno = 0;
  i = 1;
  while (i <= 100)
  {
    if (i % 6 == 0)
    {
      a = i / 100;
      b = (i / 10) % 10;
      c = i % 10;
      s = a + b + c;
      printf("\n%d\n %.0f", i, s);
      sukupno += i;
      printf("ukupna suma brojeva je = %.0f", sukupno);
    }
    i++;

  }
  -------------------------------------------------------
  4.14 //ISPISATI BROJEVE GDE JE DRUGA CIRFRA ZA 2 VECA OD PRVE I TRECA ZA 1 VECA OD DRUGE
  for (int a = 1; a <= 9; a++)
    for (int b = 0; b <= 9; b++)
      for (int c = 0; c <= 9; c++)
      {
        if (b == (a + 2) && c == (b + 1))
        {
          printf("%d%d%d\n", a, b, c);
        }
      }
--------------------------------------------
4.15// ISPISATI AMSTRONGOVE BROJEVE, BROJ KOJI JE JEDNAK SUMI KUBOVA SVOJIH CIFARA
  for (int a = 1; a < 9; a++)
    for (int b = 0; b < 9; b++)
      for (int c = 0; c < 9; c++)
      {
        if (a * a * a + b * b * b + c * c * c == (a * 100 + b * 10 + c))
        {
          printf("%d%d%d\n", a, b, c);
        }
      }
---------------------------------------------
  4.16 // ISPISATI SVE BROJEVE TAKO DA JE (AB)*(AB)- C*C = ABC
  for (int a = 1; a < 9; a++)
    for (int b = 0; b < 9; b++)
      for (int c = 0; c < 9; c++)
      {
        if (((a * 10 + b) * (a * 10 + b) - c * c) == (a * 100 + b * 10 + c))
        {
          printf("%d%d%d\n", a, b, c);
        }
      }
------------------------------------------------
  // 4.17 ISPISATI SVE BROJEVE KOJI SU DELJIVI CIFRI KOJA SE DOBIJE NAKON STO SE OD OVE CIFRE MAKNE DRUGA CIFRA
  for (int a = 1; a < 9; a++)
    for (int b = 0; b < 9; b++)
      for (int c = 0; c < 9; c++)
      {
        if ((a * 100 + b * 10 + c) % (a * 10 + c) == 0)
        {
          printf("%d%d%d\n", a, b, c);
        }
      }
---------------------------------------------------
  // 4.18 ISPISATI KOLIKO PRIRODNIH TROCIFRENIH BROJEVA POSTOJI CIJI ZBIR CIFARA DAJE 5, ONDA ISPISATI KOLIKO IH IMA
  int i = 0;
  int s = 0, a, b, c;
  for (a = 1; a < 9; a++)
    for (b = 0; b < 9; b++)
      for (c = 0; c < 9; c++)
      {
        if (a + b + c == 5)
        {
          i++;
          s += (a * 100 + b * 10 + c);
        }
      }
  printf("suma je %d\nA ima ih %d", s, i);
  -----------------------------------------------
  // 4.19 ISPISATI BROJ N I SVE NJEGOVE DELIOCE.
  int i, n;
  printf("n: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      printf("%d\n", i);
    }
  }
---------------------------------------------------
  // 4.20 ISPISATI NIZ SAVRSENIH BROJEVA, BROJEVA JEDNAKIH SUMI SVOJIH DELIOCA

  int i, n, s = 0;
  printf("n: ");
  scanf("%d", &n);

  for (i = 1; i < n; i++)
  {
    if (n % i == 0)
    {
      s += i;
        }
  }
  s == n ? printf("Broj je savrsen") : printf("Broj nije savrsen");

  // 4.20.1 ISPISATI SVE SAVRSENE BROJEVE
  int i, n, j, s;
  printf("niz n: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    s = 0;
    for (j = 1; j < i; j++)
    {
      if (i % j == 0)
      {
        s += j;
      }
    }
    if (s == i)
    {
      printf("%d\n ", i);
    }
  }
----------------------------------------
  // 4.21 BROJ UCENIKA, NJIHOVE OCENE I KOLIKO JEDINICA IMA
  int i = 1, j = 0, n, ocena, skupOcena = 0;
  float avg = 0;
  printf("unesi koliko ucenika ce dobiti ocenu: ");
  scanf("%d", &n);

  while (i <= n)
  {
    printf("Ocena ucenika br.%d: ", i);
    scanf("%d", &ocena);
    if (ocena == 1)
    {
      j++;
    }
    skupOcena += ocena;
    avg = (float)skupOcena / n;
    i++;
  }
  printf("Srednja ocena ucenika: %.2f\nBroj jedinica: %d", avg, j);
----------------------------------------------------
  // 4.22 ISPISATI SAT GDE CE SE 3 ISPISATI KAO 0h 00m 03s 00h 00m 30s ...

  int h, m, s, n;
  printf("n: ");
  scanf("%d", &n);

  for (h = 0; h <= 23; h++)
    for (m = 0; m <= 59; m++)
      for (s = 0; s <= 59; s++)
      {
        if (s / 10 + s % 10 + h / 10 + h % 10 + m % 10 + m / 10 == n)
        {

          printf("%dh : %dm : %ds\n", h, m, s);
        }
      }
----------------------------------------------------

  // 4.22 Саставити програм за табелирање функције 2 опсегу од xmin до xmax са кораком return 0;

  float xmax, x, xmin, dx, y = 1, q = 1, q2 = 1;

  printf("xmax i xmin: ");
  scanf("%f %f", &xmin, &xmax);
  x = xmin;
  while (x < xmax)
  {
    q = 2 * x + 1;
    q2 = x * x - 1;
    y = q / q2;
    printf("%.5f %.5f\n", x, y);
    x += 0.2;
  }
  ----------------------------------------------------
  // 4.24
  int i;
  float x, dx, n, y = 1, xmax, xmin, p = 1;
  x = xmin;
  printf("Unesi n i korak dx: ");
  scanf("%f %f", &n, &dx);
  printf("Unesi xmax i xmin: ");
  scanf("%f %f", &xmin, &xmax);
  for (x = xmin; x <= xmax; x += dx)
  {
    for (i = 1; i <= n; i++)
    {
      p *= x;
      y *= (1 + p);
    }
    printf("%10.6f %11.6f\n", x, y);
    p = 1;
    y = 1;
  }
  ----------------------------------
//4.25
------------------------------------
  // 4.26
  int i, n, j;
  printf("n: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
    {
      printf("* ");
    }
    printf("\n");
  }
  int i, n, j;
  printf("n: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    for (j = 0; j <= 9; j++)
    {
      printf("%d", j);
    }
    printf("\n");
  }
  ------------------------------------
  //4.27 ???
  int i, j, m, n, a;
  printf(" m= ");
  scanf("%d", &m);
  printf(" n= ");
  scanf("%d", &n);
  printf(" ASCII= ");
  scanf("%d", &a);
  printf("\n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
      printf("%c", a);
    printf("\n");
  }
  ------------------------------------
  // 5.2 TROSENJE VREMENA NAJAJCE

  int a = 1, b = 1, c = 10;

  while (a <= 10)
  {
    printf("%d", a);
    a++;
  }
  while (b <= 10)
  {
    if (b % 2 == 0)
    {
      printf("\n%d", b);
    }
    b++;
  }
  while (c > 0)
  {
    printf("\n%d", c);
    c--;
  }
-------------------------------------------
5.11
  int i, b, m = 0, n, brojilac = 1, imenilac = 1;
  while (n < 1 || m < 1 || m < n)
  {
    printf("m: ");
    scanf("%d", &m);
    printf("n: ");
    scanf("%d", &n);
  }
  for (i = m; i > m - n; i--)
    brojilac *= i;
  for (i = 1; i <= n; i++)
    imenilac *= i;
  brojilac /= imenilac;
  printf("\n%d", brojilac);
-------------------------------------------
  // 5.12 Саставити програм који ће учитати два броја m и n. Оба броја треба да буду природна. Ако
  // тај услов није испињен, учитавање треба поновити.Ако је n < m, заменити m са n.Наћи и исписати суму квадратних
  // корена /свих непарних бројева од m до n.\

  int m = 0, n, k;
  float s = 0;

  while (m < 1 || n < 1)
  {
    printf("n i m: ");
    scanf("%d %d", &m, &n);
  }
  if (n > m)
  {
    k = n;
    n = m;
    m = k;
  }

  for (int i = m; i >= n; i--)
  {
    if (i % 2 != 0)
    {
      s += sqrt(i);
    }
  }
  printf("%.3f\n", s);
------------------------------------------------------
//5.13
  int n, z = 1;
  float s = 0;
  printf("n: ");
  scanf("%d", &n);
  int i = 1;
  while (i <= n)
  {
    s += (float)z / i;
    z = -z;
    i++;
  }
  printf("%.3f", s);
------------------------------------------------------
//5.15
  int n = 1;
  float s = 0, clan;
  clan = 1 / (n * n);
  while (clan > 1e-4)
  {
    clan = (float)1 / (n * n);
    s += clan;
    n++;
  }
  printf("suma = %.3f", s);
------------------------------------------------------
  // 5.16
  int s, a, n, x, eps;
  float clan;
  printf("a: ");
  scanf("%d", &a);
  printf("x: ");
  scanf("%d", &x);
  printf("eps: ");
  scanf("%d", &eps);
---------------------------------------------
  // 5.17 Саставити програм којим се исписује највећи заједнички делилац (NZD) бројева a и b
помоћу Еуклидовог алгоритма:
- ако је a=b, тада је NZD=a и то је крај алгоритма;
- ако је а≠b, тада од већег броја одузимамо мањи и враћамо се на први корак.

  int a, b, NZD;
  printf("a i b");
  scanf("%d %d", &a, &b);
  if (a == b)
  {
    printf("NZD je %d", a);
  }

  while (a != b)
  {
    if (a > b)
    {
      a = a - b;
      if (a == b)
      {
        printf("NZD je %d", a);
      }
    }
    else
    {
      b = b - a;
      if (a == b)
      {
        printf("NZD je %d", a);
      }
    }
  }
  ------------------------------------------------
  int abc;
  printf("abc: ");
  scanf("%d", &abc);

  abc % (abc / 100 + (abc / 10) % 10 + abc % 10) == 0 ? printf("%d je Nivenov broj", abc)
                                                      : printf("%d nije Nivenov broj");
------------------------------------------------------
  // 5.19 Саставити програм који за унети природни број исписује број чије су цифре у обрнутомредоследу унетог броја.
  int n, k, m = 0;
  printf("Unesi broj n: ");
  scanf("%d", &n);
  k = n;
  while (k > 0)
  {
    m = m * 10 + k % 10;
    k = k / 10;
  }
  printf("%d\n", m);
--------------------------------------------------------
//5.21
  int a, b, c, zbir;
  for (a = 1; a <= 20; a++)
  {
    for (b = 1; b <= 20; b++)
    {
      zbir = a * a + b * b;
      c = 1;
      while (c * c <= zbir)
      {
        if (c * c == zbir)
          printf(" a=%2d b=%2d c=%2d\n", a, b, c);
        c++;
      }
    }
  }
---------------------------------------------------------
  int n, k, m = 0;
  printf("Unesi broj n: ");
  scanf("%d", &n);
  if (n % 10 == 0)
  {
    n = n + 1;
  }
  k = n;
  while (k > 0)
  {
    m = m * 10 + k % 10;
    k = k / 10;
  }
  printf("%d\n", m);
---------------------------------------------------------

  int n, br;
  printf("n: ");
  scanf("%d", &n);
  for (br = 2; n > 1; br++)
    while (n % br == 0)
    {
      printf("%d ", br);
      n = n / br;
    }
------------------------------------------------------
  // 6.3. Саставити програм који омогућује унос целих бројева све док препозна број чији квадрат припада првој стотини.

  int a;

  do
  {
    printf("unesi broj: ");
    scanf("%d", &a);
  } while (a * a > 100);

------------------------------------------------------
  // 6.4. Саставити програм којим се исписују сви степени броја 2 који нису већи од унете вредности променљиве границе, а која је већа од броја 2.

  int granica, stepen = 1;
  printf("granica: ");
  scanf("%d", &granica);
  if (granica >= 2)
  {
    do
    {
      stepen *= 2;
      printf("%d ", stepen);
    } while (stepen <= granica / 2);
  }
  else
    printf(" Konju ");
------------------------------------------------------
  // 6.5
  int n = 1;
  float eps, clan = 1, s = 1, z = -1;
  printf("eps: ");
  scanf("%f", &eps);

  do
  {
    clan = (float)z / (2 * n + 1);
    s += clan;
    z = -z;
    n++;
  } while (fabs(clan) > eps);
  printf("%f", 4 * s);
  -----------------------------------------------------
  int n, granicaStart, granicaEnd, br = 0;
  while (granicaStart < 0 || granicaEnd > 100 || granicaStart > 100 || granicaStart > granicaEnd)
  {
    printf("Unesi validnu granicu: ");
    scanf("%d %d", &granicaStart, &granicaEnd);
  }
  n = granicaStart;
  do
  {
    if (n % 4 == 0)
    {
      printf("%d ", n);
      br++;
    }
    if (br % 10 == 0)
      printf("\n");
    n++;
  } while (n > granicaStart && n <= granicaEnd);
  --------------------------------------------------------
  // 6.9. Саставити програм којим се врши сабирање и исписује сума свих троцифрених бројева дељивих са 64. Колико има таквих бројева ?
  int a = 100, br = 0;
  float s = 0;
  do
  {
    if (a % 64 == 0)
    {
      br++;
      s += a;
    }

    a++;
  } while (a < 999);
  printf("suma: %.0f\nkolko ih ima: %d", s, br);
 --------------------------------------------------------

  // ako se sa ulaza ucitava trocifren prirodan broj n napisati program kojim se odredjuje najmanji moguci broj m od cifara broja n;
  // primer ako je n=312 tada je n=123, ako je n=252 tada je n=225


// 2. ZADATAK 1 list
  // ispisati sve magicne brojeve do 1000. magican broj je onaj koji je jednak sumi svojih delitelja iskljucujuci njega npr 6=3+2+1

  int i, n, j, s;
  printf("niz n: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    s = 0;
    for (j = 1; j < i; j++)
    {
      if (i % j == 0)
      {
        s += j;
      }
    }
    if (s == i)
    {
      printf("%d\n ", i);
    }
  }

// 3. ZADATAK 1 list
  int n, z = 1;
  float q = 1, q2 = 1, s = 0;
  printf("n: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    q = pow((3 * i), 2);
    q2 = i / q;
    s += (float)z * q2;
    z = -z;
  }
  printf("%f\n", s);
 ----------------------------------------
//1. ZADATAK 2 list
  // horizontala i vertikala sahovske table su numerisane od 1 do 8 ako se ucivataju parovi tacaka (a,b) i (c,d) koji oznacavaju dva polja gde je prvi broj u paru horizontala, a drugi vertikala, ispisati da li su polja iste boje.

// 18 28 38 48 58 68 78 88
// 17 27 37 47 57 67 77 87
// 16 26 36 46 56 66 76 86
// 15 25 35 45 55 65 75 85
// 14 24 34 44 54 64 74 84
// 13 23 33 43 53 63 73 83
// 12 22 32 42 52 62 72 82
// 11 21 31 41 51 61 71 81



  int a, b, c, d;

  printf("unesi a i b: ");
  scanf("%d %d", &a, &b);
  printf("unesi c i d: ");
  scanf("%d %d", &c, &d);

  if ((a + b) % 2 == (c + d) % 2)
  {
    printf("Iste su boje looool");
  }
  else
  {
    printf("ne kenjaj");
  }

  //2. ZADATAK 2list
  // napisati program kojim se za dati prirodan broj x formira broj y sastavljen od istih cifara ali u obrnutom poretku, a zatim ispisuje da li je broj x+y potpun kvadrat

  int x, y = 0, z;

  printf("ispisi x: ");
  scanf("%d", &x);
  z = x;
  while (z > 0)
  {
    y *= 10 + z % 10;
    z /= 10;
  }
  int pomoc = sqrt(y + x);
  if (pomoc % 10 != 0)
    printf("Brao");
  else
    printf("Jok vala");

//3. ZADATAK 2 list
  // ispisati program kojim se izracunava: S=1! +3! + 5! n mora biti neparan broj u suprotnom je s=0

  int n, f = 1;
  float s = 0;
  printf("n: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i += 2)
  {
    f = 1;
    for (int j = 1; j <= i; j++)
    {
      f *= j;
    }
    s += f;
  }
  printf("%.2f\n ", s);
----------------------------------------------- */
  return 0;
}