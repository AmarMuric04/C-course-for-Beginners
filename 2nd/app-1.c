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
-------------------------------------------------------*/

  return 0;
}