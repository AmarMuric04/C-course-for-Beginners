#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#define pi 3.1415926
#define max 100;
#define MAX 100
/*ZADACI DO FUNKCIJA
int main()
// {

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
//--------------------------------------------------------
//1. ZADATAK

int h1, m1, s1, h2, m2, s2, q;
printf("U koliko sati, minuta i sekundi je avion poleteo?\n(h, m, s)\n");
scanf("%d %d %d", &h1, &m1, &s1);
printf("Koliko je avion proveo vremena u vazduhu u seknudama?\n");
scanf("%d", &q);

s2 = (q + s1) % 60;
m2 = (q + s1) / 60;
h2 = (m2 + m1) / 60;
m2 = (m2 + m1) % 60;
h2 = (h2 + h1) % 60;

printf("Avion ce selteti u %dh : %dm : %ds", h2, m2, s2);

//---------------------------------------------------------
//2. ZADATAK
int p, n, q, q2;
float S = 0;
float Sn = 0;
printf("unesi p i niz n\n");
scanf("%d %d", &p, &n);

for (int i = 0; i <= p - 1; i++)
{
  printf("Unesi broj: ");
  scanf("%d", &q);
  i < p - 1 ? S += q : -1;
}
for (int i = p + 1; i <= n; i++)
{
  printf("Unesi broj: ");
  scanf("%d", &q2);
  Sn += q2;
}

S == Sn ? printf("\nNiz je usredjen.") : printf("\nNiz nije usredjen.");

//------------------------------------------
//3. ZADATAK

int a, b, i, br = 0;
printf("Unesi a i b\n");
scanf("%d %d", &a, &b);
if (a > 0 && b > 0)
{
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
        ? printf("Brojevi jesu uzajamno prosti.")
        : printf("Brojevi nisu uzajamno prosti.");
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
        ? printf("Brojevi jesu uzajamno prosti.")
        : printf("Brojevi nisu uzajamno prosti.");
  }
}
else
  printf("Brojevi nisu prirodni.");
-------------------------------------------------------
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
  y = y * 10 + z % 10;
  z /= 10;
}

float pomoc = sqrt(x + y);

if (pomoc == (int)pomoc)
  printf("TOOO");
else
  printf("ne");

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
-----------------------------------------------

int a, b, c;
float D = 1, x1 = 1, x2 = 1, q = 1, q2 = 1, q3 = 1, q4 = 1;

printf("a b c: ");
scanf("%d %d %d", &a, &b, &c);

q = 2 * a;
q2 = pow(b, 2);
q3 = (4 * a * c);
q4 = sqrt(q2 - q3);
D = q2 - q3;
if (D < 0)
  printf("Poz");
if (D == 0)
{
  x1 = ((-b) + q4) / q;
  printf("%.2f je resenje za oba", x1);
}
if (D > 0)
{
  x1 = ((-b) + q4) / q;
  x2 = ((-b) - q4) / q;
  printf("%.2f %.2f", x1, x2);
}
------------------------------------------------

int y, a1, b1, a2, b2, x;

printf("Unesi a1 i b1: ");
scanf("%d %d", &a1, &b1);
printf("Unesi a2 i b2: ");
scanf("%d %d", &a2, &b2);

if (a1 == a2 && b1 == b2)
{
  printf("Poklapaju se");
}
else if (a1 == a2)
{
  printf("Paralelne su");
}

else
{
  printf("Seku se");
}
-------------------------------------------

// Zadatak 10. Podaci o krugovima se sastoje od koordinata centra i dužine poluprečnika.napisati program koji ispituje u kom su položaju dati krugovi.
-------------------------------------------

int n;

printf("n: ");
scanf("%d", &n);

for (int i = 1; i <= n; i++)
{
  if (n % i == 0)
  {
    printf("%d ", i);
  }
}

-------------------------------------------

  float s = 0;
  int n, k, i, j, pomocna = 0, f = 1;
  scanf("%d", &n);
  k = n - 5;
  for (i = 1; i <= n; i++)
  {
    pomocna += i;
  }
  if (k > 0)
  {
    for (j = 1; j <= k; j++)
    {
      f *= j;
    }
  }
  if (k < 0)
  {
    for (j = -1; j <= k; j--)
    {
      f *= j;
    }
  }
  while (n == 5)
  {
    scanf("%d", &n);
    k = n - 5;
  }
  s = (float)pomocna / f;
  printf("%f", s);
  return 0;
}

  int a1 = 1, a2 = 2, q1 = 0, q2 = 0, ai = 1, n = 20, i;

  printf("%d %d", a1, a2);

  for (i = 1; i <= n - 2; i++)
  {
    q1 = (3 * ai) - 1;
    q2 = (2 * ai) - 2;
    ai = q1 - q2;
    printf(" %d", ai);
  }
1. ZADATAK KOLOKVIJUM GRUPA 1
 int x, y;
 scanf("%d", &x);
 if (x > 10 && x < -5)
 {
   printf("Greska.");
 }

if (x > -2 && x < 2)
{
  printf("%d", 5 * (x * x * x * x * x * x * x * x * x * x * x * x * x * x * x));
}
else if (x > 3 && x <= 7)
{
  printf("%d", (3 * x) - 1);
}
else
{
  printf("%d", sqrt((x * x * x) - 5));
}
int n, br50 = 0, br5075 = 0, br76 = 0, i, kg;
printf("Koliko ima takmicara u klubu");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
  printf("Kilaza: ");
  scanf("%d", &kg);
  if (kg < 50)
  {
    br50++;
  }
  else if (kg >= 50 && kg <= 75)
  {
    br5075++;
  }
  else if (kg > 75)
  {
    br76++;
  }
}
printf("do 50: %d, od 50 do 75: %d, preko 75: %d", br50, br5075, br76);
------------------------------------------
//1.ZADATAK KOLOKVIJUM 3
int abc, s = 0, p = 1, a, b, c;

scanf("%d", &abc);

a = abc / 100;
b = (abc / 10) % 10;
c = abc % 10;

if (abc > 100 && abc < 999)
{
  if (a < c)
    printf("%d", a + b + c);
  else
    printf("%d", a * b * c);
}

//2. ZADATAK KOLOKVIJUM 3
float s = 0, clan = 0;
int x, n, pomocna = 0, pomocna2, z = 1;
scanf("%d %d", &x, &n);

for (int i = 1; i <= n; i++)
{
  for (int j = 1; j <= i; j++)
  {
    pomocna += i;
  }
  pomocna2 = pow(x, i);
  clan = (float)pomocna2 / pomocna;
  s += z * clan;
  z = -z;
}
printf("%.5f", s);

//3. ZADATAK KOLOKVIJUM 3
int m, n, k, s = 0;
scanf("%d %d", &m, &n);

if (m > n)
{
  k = m;
  m = n;
  n = k;
}
for (m; m <= n; m++)
{
  int l = m;

  while (l > 0)
  {
    s = s + l % 10;
    l /= 10;
  }
  if (s % 2 == 0)
  {
    printf("%d\n", m);
  }
  s = 0;
}
-------------------------------
int i, pomocna, a, a1 = 1, a2 = 2, q1 = 0, q2 = 0, ai = 1, n = 20;

printf("%d %d", a1, a2);

for (i = 3; i <= n; i++)
{
  pomocna = a1;                 //1,2,3,4,5,6,7,8...n
  a1 = a2;                      //2,4,6,8,10,12,14...n
  a = (3 * a1) - (2 * pomocna); //4,8,16,32,64,128...n
  a2 = a;                       //4,8,16,32,64,128...n

  printf(" %d", a);
}
------------------------------
float s = 0;
int n, k, i, j, pomocna = 0, f = 1;
scanf("%d", &n);
k = n - 5;
while (n == 5)
{
  scanf("%d", &n);
  k = n - 5;
}
for (i = 1; i <= n; i++)
{
  pomocna += i;
}
if (k > 0)
{
  for (j = 1; j <= k; j++)
  {
    f *= j;
  }
}
if (k < 0)
{
  for (j = -1; j <= k; j--)
  {
    f *= j;
  }
}

s = (float)pomocna / f;
printf("%f", s);
---------------------------
// int n;
// printf("n= ");
// scanf("%d", &n);
// for (int i = 1; i <= n; i++)
// {
//   if (n % i == 0 && i != 1)
//   {
//     printf("%d ", i);
//     n = n / i;
//   }
// }
---------------------------

return 0;
}
int b = sabiranje(5, 6);
printf("%d", b);

int a, b;
printf("Unesi a i b: ");
scanf("%d %d", &a, &b);
int z = sabiranje(a, kvadrat(b));
printf("%d \n", z);

float z2 = (float)oduzimanje(kub(a), deljenje(a, b));
printf("%.2f \n", z2);

int z3 = sabiranje(mnozenje(a, b), oduzimanje(5, b));
printf("%d \n", z3);

/*--------------------------------------------
int a, b;
printf("Unesi a i b: ");
scanf("%d %d", &a, &b);

int c = max(a, b);

printf("Veci broj je %d", c);

int d, e;
printf("Dodatno: \nUnesi d i e: ");
scanf("%d %d", &d, &e);

int f = max(max(a, b), max(d, e));
printf("Najveci unet broj je %d", f);
---------------------------*/
/*FUNKCIJE
int sabiranje(int a, int b)
{
  return a + b;
}
int oduzimanje(int a, int b)
{
  return a - b;
}
int mnozenje(int a, int b)
{
  return a * b;
}
float deljenje(int a, int b)
{
  return a / b;
}
int kvadrat(int a)
{
  return a * a;
}
int kub(int a)
{
  return a * a * a;
}
int maximum(int a, int b)
{
  return a > b ? a : b;
}
*/
/*MATRICE
int i, j, m, n, mat[100][100];
printf("Vrste i kolone: ");
scanf("%d %d", &m, &n);

for (i = 0; i < m; i++)
{
  for (j = 0; j < n; j++)
  {
    printf("Element[%d][%d]", i, j);
    scanf("%d", &mat[i][j]);
  }
}
for (i = 0; i < m; i++)
{
  for (j = 0; j < n; j++)
  {
    printf("%d ", mat[i][j]);
  }
  printf("\n");
}

void stvaranjeMatrice(int vrsta, int kolona, int matrica[MAX][MAX])
{
  int i, j;
  for (i = 0; i < vrsta; i++)

    for (j = 0; j < kolona; j++)
    {
      printf("Unesite element [%d][%d]: ", i, j);
      scanf("%d", &matrica[i][j]);
    }
}

void prikazivanjeMatrice(int vrste, int kolone, int matrica[MAX][MAX])
{
  for (int i = 0; i < vrste; i++)
  {
    for (int j = 0; j < kolone; j++)
    {
      printf("%d ", matrica[i][j]);
    }
    printf("\n");
  }
}

int zbirElemenataMatrice(int vrste, int kolone, int matrica[MAX][MAX])
{
  int suma = 0;
  for (int i = 0; i < vrste; i++)
    for (int j = 0; j < kolone; j++)
      suma += matrica[i][j];
  return suma;
}

void ispisivanjeZbiraParnihBrojevaIBrojaNula(int vrste, int kolone, int matrica[MAX][MAX])
{
  int brojNula = 0;
  int sumaParnih = 0;
  for (int i = 0; i < vrste; i++)
    for (int j = 0; j < kolone; j++)
    {
      if (matrica[i][j] % 2 == 0)
        sumaParnih += matrica[i][j];
      if (matrica[i][j] == 0)
        brojNula++;
    }
  printf("broj nula: %d\nsuma parnih: %d\n", brojNula, sumaParnih);
}

void sabiranjeDveMatrice(int vrste, int kolone, int matrica1[MAX][MAX], int matrica2[MAX][MAX])
{
  int suma[vrste][kolone];
  for (int i = 0; i < vrste; i++)
  {
    for (int j = 0; j < kolone; j++)
    {
      suma[i][j] = matrica1[i][j] + matrica2[i][j];
      printf("%d ", suma[i][j]);
    }
    printf("\n");
  }
}

void ispisivanjeElemenataSaGlavneISporedneDijagonale(int vrste, int kolone, int matrica[MAX][MAX])
{
  int elementiIzGlavne[MAX], elementiIzSporedne[MAX];
  int sumaIzGlavneDijagonale = 0, sumaIzSporedneDijagonale = 0;
  if (vrste != kolone)
  {
    printf("Matrica nije kvadratna.");
    return;
  }
  for (int i = 0; i < vrste; i++)
  {
    for (int j = 0; j < kolone; j++)
    {
      if (i == j)
      {
        sumaIzGlavneDijagonale += matrica[i][j];
        elementiIzGlavne[i] = matrica[i][j];
      }
      if (j + i == vrste - 1)
      {
        sumaIzSporedneDijagonale += matrica[i][j];
        elementiIzSporedne[i] = matrica[i][j];
      }
    }
  }
  printf("Elementi iz glavne dijagonale: ");
  for (int i = 0; i < vrste; i++)
    printf("%d, ", elementiIzGlavne[i]);

  printf("\n");

  printf("Elementi iz sporedne dijagonale: ");
  for (int i = 0; i < vrste; i++)
    printf("%d, ", elementiIzSporedne[i]);

  printf("\nSuma svih elemenata iz glavne dijagonale: %d\n", sumaIzGlavneDijagonale);
  printf("Suma svih elemenata iz sporedne dijagonale: %d\n", sumaIzSporedneDijagonale);
}

void ispisivanjeSumaSvihVrsta(int vrste, int kolone, int matrica[MAX][MAX])
{
  int sumaVrste = 0;
  for (int i = 0; i < vrste; i++)
  {
    for (int j = 0; j < kolone; j++)
    {
      sumaVrste += matrica[i][j];
    }
    printf("Zbir %d vrste je: %d\n", i + 1, sumaVrste);
    sumaVrste = 0;
  }
}

void ispisivanjeZbiraOdredjeneVrste(int vrste, int kolone, int matrica[MAX][MAX])
{
  int odabranaVrsta;
  for (int i = 0; i < vrste; i++)
  {
    for (int j = 0; j < kolone; j++)
    {
      printf("%d ", matrica[i][j]);
    }
    printf("\n");
  }
  printf("Unesi broj vrste od koje zelis da znas zbir: ");
  scanf("%d", &odabranaVrsta);

  int i = odabranaVrsta - 1, zbirOdabraneVrste = 0;
  for (int j = 0; j < kolone; j++)
  {
    zbirOdabraneVrste += matrica[i][j];
  }
  printf("Zbir odabrane vrste je: %d\n", zbirOdabraneVrste);
}

void ispisivanjeMatriceNaSpecificanNacin(int vrste, int kolone, int matrica[MAX][MAX])
{
  int i, j;
  printf("\n Elementi:\n");
  for (j = 0; j < kolone; j++)
  {
    if (j % 2 == 0)
      for (i = 0; i < vrste; i++)
        printf(" %d", matrica[i][j]);
    else
      for (i = vrste - 1; i >= 0; i--)
        printf(" %d", matrica[i][j]);
  }
}

void deljenjeVrsteSaDijagonalnimElementom(int vrste, int kolone)
{
  float matrica[MAX][MAX], pomocna;
  for (int i = 0; i < vrste; i++)
    for (int j = 0; j < kolone; j++)
    {
      printf("element [%d][%d]", i, j);
      scanf("%f", &matrica[i][j]);
    }

  for (int i = 0; i < vrste; i++)
    for (int j = 0; j < kolone; j++)
      printf("%.0f\n", matrica[i][j]);

  for (int i = 0; i < vrste; i++)
  {
    for (int j = 0; j < kolone; j++)
    {
      if (matrica[i][i] != 0)
      {
        for (j = 0; j < vrste; j++)
        {
          pomocna = matrica[i][i];
          matrica[i][j] /= pomocna;
        }
      }
      else if (matrica[i][i] == 0)
      {
        for (j = 0; j < vrste; j++)
        {
          if (i == j)
            matrica[i][j] = 1;
          else
            matrica[i][j] = 0;
        }
      }
    }
  }
  for (int i = 0; i < vrste; i++)
  {
    for (int j = 0; j < kolone; j++)
      printf("%.2f ", matrica[i][j]);
    printf("\n");
  }
}

void menjanjeElemenataPoviseIIspodGlavneDijagonale(int vrste, int kolone, int matrica[MAX][MAX])
{
  int x;
  printf("Unesi broj sa kojim zelis da uredis matricu: ");
  scanf("%d", &x);
  for (int i = 0; i < vrste; i++)
  {
    for (int j = 0; j < kolone; j++)
    {
      if (j > i)
        matrica[i][j] += 2 * x;
      if (i > j)
        matrica[i][j] += x;
    }
  }

  for (int i = 0; i < vrste; i++)
  {
    for (int j = 0; j < kolone; j++)
      printf("%d ", matrica[i][j]);
    printf("\n");
  }
}

void zamenaDveVrste(int vrste, int kolone, int matrica[MAX][MAX])
{
  int prvaMatrica, drugaMatrica, pomocna;
  printf("Izaberi broj matrice koju zelis da promenis: ");
  scanf("%d", &prvaMatrica);
  printf("Izaberi broj matrice sa kojom zelis prvu da promenis: ");
  scanf("%d", &drugaMatrica);
  for (int i = 0; i < vrste; i++)
  {

    if (prvaMatrica - 1 == i)
    {
      pomocna = drugaMatrica - 1;
      for (int j = 0; j < kolone; j++)
      {
        printf("%d ", matrica[pomocna][j]);
      }
    }
    else if (drugaMatrica - 1 == i)
    {
      pomocna = prvaMatrica - 1;
      for (int j = 0; j < kolone; j++)
      {
        printf("%d ", matrica[pomocna][j]);
      }
    }
    else if (i != drugaMatrica - 1 && i != prvaMatrica - 1)
    {
      for (int j = 0; j < kolone; j++)
      {
        printf("%d ", matrica[i][j]);
      }
      printf("\n");
    }
  }
}

void transoponvanjeMatrice(int vrste, int kolone, int matrica[MAX][MAX])
{
  printf("Transponovanje je kada svaka vrsta postane kolona.");
  for (int i = 0; i < vrste; i++)
  {
    for (int j = 0; j < kolone; j++)
    {
      printf("%d ", matrica[j][i]);
    }
    printf("\n");
  }
}

void transponovanjeMatriceBezFunkcija()
{
  int vrste, kolone, matrica[MAX][MAX];
  printf("Broj vrsta: ");
  scanf("%d", &vrste);
  printf("Broj kolona: ");
  scanf("%d", &kolone);

  // Stvaranje matrice
  for (int i = 0; i < vrste; i++)
    for (int j = 0; j < vrste; j++)
    {
      printf("Unesi element [%d][%d]", i, j);
      scanf("%d", &matrica[i][j]);
    }

  // Prikazivanje matrice
  for (int i = 0; i < vrste; i++)
  {
    for (int j = 0; j < vrste; j++)
    {
      printf("%d ", matrica[i][j]);
    }
    printf("\n");
  }

  // Transponovanje matrice
  for (int i = 0; i < vrste; i++)
  {
    for (int j = 0; j < vrste; j++)
    {
      printf("%d ", matrica[j][i]);
    }
    printf("\n");
  }
}

void najveciINajmanjiElementUMatrici(int vrste, int kolone, int matrica[MAX][MAX])
{
  int najveciBroj,
      najmanjiBroj,
      nizNajvecihBrojeva[MAX], nizNajmanjihBrojeva[MAX], i = 0, j = 0;

  for (i = 0; i < vrste; i++)
  {
    najmanjiBroj = matrica[i][0];
    najveciBroj = matrica[i][0];
    for (j = 0; j < kolone; j++)
    {
      if (matrica[i][j] > najveciBroj)
        najveciBroj = matrica[i][j];
      if (matrica[i][j] < najmanjiBroj)
        najmanjiBroj = matrica[i][j];
    }
    nizNajmanjihBrojeva[i] = najmanjiBroj;

    nizNajvecihBrojeva[i] = najveciBroj;
  }

  for (i = 0; i < vrste; i++)
  {
    printf("Najveci element u vrsti broj %d: %d \n", i + 1, nizNajvecihBrojeva[i]);
  }
  for (i = 0; i < vrste; i++)
  {
    printf("Najmanji elemnt u vrsti broj %d: %d \n", i + 1, nizNajmanjihBrojeva[i]);
  }
}

void mnozenjeMatrica()
{
  int i, j, matrica1[MAX][MAX], matrica2[MAX][MAX];

  int vrste1, vrste2, kolone1, kolone2;
  if (kolone1 == vrste2)
  {
    printf("Unesi vrste i kolone prve matrice");
    scanf("%d %d", &vrste1, &kolone1);
    printf("Unesi vrste i kolone druge matrice");
    scanf("%d %d", &vrste2, &kolone2);

    for (i = 0; i < vrste1; i++)
      for (j = 0; j < kolone1; j++)
      {
        printf("Prva matrica element [%d][%d]: ");
        scanf("%d %d", &matrica1[i][j]);
      }
    for (i = 0; i < vrste1; i++)
      for (j = 0; j < kolone1; j++)
      {
        printf("Prva matrica element [%d][%d]: ");
        scanf("%d %d", &matrica1[i][j]);
      }
  }
  else
    printf("Matrice nisu u dobrom formatu za mnozenje (nxm mxk)");

  int pomnozeneMatrice[MAX][MAX];
  for (i = 0; i < vrste1; i++)
  {
    for (j = 0; j < kolone2; j++)
    {
    }
  }
}

int main()
{
  int vrste, kolone;
  printf("\nBroj vrsta: ");
  scanf("%d", &vrste);

  printf("Broj kolona: ");
  scanf("%d", &kolone);

  // if (vrste > MAX || kolone > MAX)
  // {
  //   printf("Unesene dimenzije prelaze maksimalnu veličinu matrice.");
  //   return -1;
  // }

  int matrica[MAX][MAX];

  stvaranjeMatrice(vrste, kolone, matrica);

  prikazivanjeMatrice(vrste, kolone, matrica);

  // printf("Suma svih elemenata date matrice: %d\n", zbirElemenataMatrice(vrste, kolone, matrica));

  // ispisivanjeZbiraParnihBrojevaIBrojaNula(vrste, kolone, matrica);

  // // int vrste2, kolone2;
  // // printf("\nBroj vrsta: ");
  // // scanf("%d", &vrste2);

  // // printf("Broj kolona: ");
  // // scanf("%d", &kolone2);

  // // if (vrste2 > MAX || kolone2 > MAX)
  // // {
  // //   printf("Unesene dimenzije prelaze maksimalnu veličinu matrice.");
  // //   return -1;
  // // }

  // // int matrica2[MAX][MAX];

  // // stvaranjeMatrice(vrste2, kolone2, matrica2);

  // // if (vrste != vrste2 || kolone != kolone2)
  // // {
  // //   printf("Matrice se ne mogu sabirati zato sto nisu istih dimenzija (nxm)");
  // //   return -1;
  // // }
  // // sabiranjeDveMatrice(vrste, kolone, matrica, matrica2);

  // ispisivanjeElemenataSaGlavneISporedneDijagonale(vrste, kolone, matrica);

  // ispisivanjeSumaSvihVrsta(vrste, kolone, matrica);

  // ispisivanjeZbiraOdredjeneVrste(vrste, kolone, matrica);

  // ispisivanjeMatriceNaSpecificanNacin(vrste, kolone, matrica);

  // deljenjeVrsteSaDijagonalnimElementom(vrste, kolone);

  // menjanjeElemenataPoviseIIspodGlavneDijagonale(vrste, kolone, matrica);

  // zamenaDveVrste(vrste, kolone, matrica);

  // transoponvanjeMatrice(vrste, kolone, matrica);

  // transponovanjeMatriceBezFunkcija();

  najveciINajmanjiElementUMatrici(vrste, kolone, matrica);
  return 0;
}
*/
/*NIZOVI

int main()
{
  int n;
  printf("Predvidjena duzina niza?\n");
  scanf("%d", &n);

  int niz[n];
  for (int i = 1; i <= n; i++)
  {
    printf("Unesi element no.%d: ", i);
    scanf("%d", &niz[i]);
  }
  for (int i = n; i > 0; i--)
    printf("%d ", niz[i]);
-------------------------------------------------
  int n, suma = 0;
  printf("Predvidjena duzina niza?\n");
  scanf("%d", &n);
  int niz[n];
  int duzina = sizeof(niz) / sizeof(niz[0]);

  for (int i = 1; i <= n; i++)
  {
    printf("Unesi element no.%d: \n", i);
    scanf("%d", &niz[i]);
    suma += niz[i];
  }
  printf("Duzina niza: %d", duzina);
  printf("Artitmeticka sredina niza je: %.2f\n", (float)suma / duzina);
---------------------------------------------------
  int n, suma = 0;
  printf("Predvidjena duzina niza?\n");
  scanf("%d", &n);
  int niz[n], deljivisa3 = 0;
  int duzina = sizeof(niz) / sizeof(niz[0]);

  for (int i = 1; i <= n; i++)
  {
    printf("Unesi element no.%d: ", i);
    scanf("%d", &niz[i]);
    if (niz[i] % 3 == 0)
    {
      suma += niz[i];
      deljivisa3++;
    }
  }

  printf("Brojevi iz niza koji su deljivi sa 3: %d\n", deljivisa3);
  printf("Artitmeticka sredina niza je: %.2f\n", (float)suma / deljivisa3);
---------------------------------------------------
  int n, sumaParnih = 0, sumaNeparnih = 0;
  int sumaParnihIndeksa = 0, sumaNeparnihIndeksa = 0;
  printf("Predvidjena duzina niza?\n");
  scanf("%d", &n);
  int niz[n];
  int duzina = sizeof(niz) / sizeof(niz[0]);

  for (int i = 1; i <= n; i++)
  {
    printf("Unesi element no.%d: ", i);
    scanf("%d", &niz[i]);
    if (i % 2 == 0)
      sumaParnihIndeksa += niz[i];
    else
      sumaNeparnihIndeksa += niz[i];
    if (niz[i] % 2 == 0)
      sumaParnih += niz[i];
    else
      sumaNeparnih += niz[i];
  }
  printf("Suma parnih: %d\n", sumaParnih);
  printf("Suma neparnih: %d\n", sumaNeparnih);
  printf("Suma parnih indeksa: %d\n", sumaParnihIndeksa);
  printf("Suma neparnih indeksa: %d\n", sumaNeparnihIndeksa);
---------------------------------------------------
  int n;
  printf("Duzina oba niza: ");
  scanf("%d", &n);

  int niz1[n], niz2[n], suma = 0;

  for (int i = 1; i <= 2; i++)
  {
    if (i == 1)
    {
      for (int j = 0; j < n; j++)
      {
        printf("element  no.%d prvog niza: ", j);
        scanf("%d", &niz1[j]);
      }
    }
    else
      for (int j = 0; j < n; j++)
      {
        printf("element no.%d drugog niza: ", j);
        scanf("%d", &niz2[j]);
      }
  }
  for (int i = 0; i < n; i++)
    suma += niz1[i] * niz2[i];

  printf("Suma: %d", suma);
---------------------------------------------------
  int duzina1, duzina2;
  printf("Duzina prvog niza: ");
  scanf("%d", &duzina1);
  printf("Duzina drugog niza: ");
  scanf("%d", &duzina2);

  int niz1[duzina1], niz2[duzina2], niz3[duzina1 + duzina2];

  for (int i = 1; i <= 2; i++)
  {
    if (i == 1)
    {
      for (int j = 0; j < duzina1; j++)
      {
        printf("element  no.%d prvog niza: ", j);
        scanf("%d", &niz1[j]);
        niz3[j] = niz1[j];
      }
    }
    else
      for (int j = 0; j < duzina2; j++)
      {
        printf("element no.%d drugog niza: ", j);
        scanf("%d", &niz2[j]);
        niz3[j + duzina1] = niz2[j];
      }
  }
  for (int i = 0; i < duzina1 + duzina2; i++)
    printf("%d ", niz3[i]);
---------------------------------------------------
  int duzina;
  printf("Duzina prvog niza: ");
  scanf("%d", &duzina);

  int niz1[duzina], niz2[duzina], niz3[duzina];

  for (int i = 1; i <= 2; i++)
  {
    if (i == 1)
    {
      for (int j = 0; j < duzina; j++)
      {
        printf("element  no.%d prvog niza: ", j);
        scanf("%d", &niz1[j]);
      }
    }
    else
      for (int j = 0; j < duzina; j++)
      {
        printf("element no.%d drugog niza: ", j);
        scanf("%d", &niz2[j]);
        niz3[j] = niz1[j] + niz2[j];
      }
  }
  for (int i = 0; i < duzina; i++)
    printf("%d ", niz3[i]);
---------------------------------------------------
  int duzina;
  printf("Duzina prvog niza: ");
  scanf("%d", &duzina);

  int niz1[duzina], niz2[duzina];
  float niz3[duzina];

  for (int i = 1; i <= 2; i++)
  {
    if (i == 1)
    {
      for (int j = 0; j < duzina; j++)
      {
        printf("element  no.%d prvog niza: ", j);
        scanf("%d", &niz1[j]);
      }
    }
    else
      for (int j = 0; j < duzina; j++)
      {
        printf("element no.%d drugog niza: ", j);
        scanf("%d", &niz2[j]);
      }
  }
  for (int i = 0; i < duzina; i++)
  {
    niz3[i] = ((float)kub(niz1[i]) / 3) + (2 * niz1[i] * niz2[i]);
    printf("%.2f ", niz3[i]);
  }
---------------------------------------------------
  int duzina;
  printf("Duzina prvog niza: ");
  scanf("%d", &duzina);

  int niz1[duzina], niz2[duzina], niz3[duzina];

  for (int i = 1; i <= 2; i++)
  {
    if (i == 1)
    {
      for (int j = 0; j < duzina; j++)
      {
        printf("element  no.%d prvog niza: ", j);
        scanf("%d", &niz1[j]);
      }
    }
    else
      for (int j = 0; j < duzina; j++)
      {
        printf("element no.%d drugog niza: ", j);
        scanf("%d", &niz2[j]);
      }
  }
  for (int i = 0; i < duzina; i++)
  {
    niz3[i] = niz1[i] + niz2[duzina - i - 1];
    printf("%d ", niz3[i]);
  }
---------------------------------------------------
  int duzina1, duzina2, brojacParnih = 0;
  printf("Duzina prvog niza: ");
  scanf("%d", &duzina1);
  printf("Duzina drugog niza: ");
  scanf("%d", &duzina2);

  int niz1[duzina1], niz2[duzina2];

  for (int i = 1; i <= 2; i++)
  {
    if (i == 1)
    {
      for (int j = 0; j < duzina1; j++)
      {
        printf("element  no.%d prvog niza: ", j);
        scanf("%d", &niz1[j]);
        if (niz1[j] % 2 == 0)
          brojacParnih++;
      }
    }
    else
      for (int j = 0; j < duzina2; j++)
      {
        printf("element no.%d drugog niza: ", j);
        scanf("%d", &niz2[j]);
        if (niz2[j] % 2 == 0)
          brojacParnih++;
      }
  }
  int niz3[brojacParnih], n = 0;
  for (int i = 0; i < duzina1; i++)
  {
    if (niz1[i] % 2 == 0)
    {
      niz3[n] = niz1[i];
      n++;
    }
  }
  for (int i = 0; i < duzina2; i++)
  {
    if (niz2[i] % 2 == 0)
    {
      niz3[n] = niz2[i];
      n++;
    }
  }
  printf("B:%d \n", brojacParnih);

  for (int i = 0; i < brojacParnih; i++)
  {
    printf("%d ", niz3[i]);
  }
---------------------------------------------------
  int duzina;
  printf("Duzina prvog niza: ");
  scanf("%d", &duzina);

  int niz1[duzina], niz2[duzina], niz3[duzina];

  for (int i = 1; i <= 2; i++)
  {
    if (i == 1)
    {
      for (int j = 0; j < duzina; j++)
      {
        printf("element  no.%d prvog niza: ", j);
        scanf("%d", &niz1[j]);
      }
    }
    else
      for (int j = 0; j < duzina; j++)
      {
        printf("element no.%d drugog niza: ", j);
        scanf("%d", &niz2[j]);
      }
  }
  for (int i = 0; i < duzina; i++)
  {
    if (niz1[i] < niz2[i])
      niz3[i] = niz1[i];
    else if (niz2[i] < niz1[i])
      niz3[i] = niz2[i];
    else if (niz2[i] == niz1[i])
      niz3[i] = 0;
    printf("%d ", niz3[i]);
  }
---------------------------------------------------
  int duzina, manjiOd0 = 0, veciOdNula = 0, n = 0, m = 0;
  printf("Duzina niza: ");
  scanf("%d", &duzina);

  int niz1[duzina];

  for (int i = 0; i < duzina; i++)
  {
    printf("element  no.%d: ", i);
    scanf("%d", &niz1[i]);
    if (niz1[i] < 0)
      manjiOd0++;
    else
      veciOdNula++;
  }

  int niz2[manjiOd0], niz3[veciOdNula];

  for (int i = 0; i < duzina; i++)
  {
    if (niz1[i] < 0)
    {
      niz2[n] = niz1[i];
      n++;
    }
    else
    {
      niz3[m] = niz1[i];
      m++;
    }
  }

  for (int i = 0; i < veciOdNula; i++)
    printf("0 ili veci: %d \n", niz3[i]);

  for (int i = 0; i < manjiOd0; i++)
    printf("Manji od 0: %d \n", niz2[i]);

------------------------------------------------
int duzina;
printf("Duzina niza: ");
scanf("%d", &duzina);

int niz1[duzina], suma = 0;

for (int i = 0; i < duzina; i++)
{
  printf("element  no.%d: ", i);
  scanf("%d", &niz1[i]);
  suma += niz1[i];
}
float artitmeticka = (float)suma / duzina;
int veciOdArtitmeticke = 0, n = 0;

for (int i = 0; i < duzina; i++)
{
  if (niz1[i] > artitmeticka)
    veciOdArtitmeticke++;
}
float niz2[veciOdArtitmeticke];
for (int i = 0; i < duzina; i++)
{
  if (niz1[i] > artitmeticka)
  {
    niz2[n] = niz1[i];
    printf("%.2f ", niz2[n]);
    n++;
  }
}
----------------------------------------
  int duzina;
  printf("Duzina niza: ");
  scanf("%d", &duzina);

  int niz1[duzina], niz2[duzina];
  for (int i = 0; i < duzina; i++)
  {
    printf("Element %d: ", i);
    scanf("%d", &niz1[i]);
  }

  for (int i = 0; i < duzina; i++)
  {
    niz2[i] = 0;
    for (int j = 0; j < i + 1; j++)
    {
      niz2[i] += niz1[j];
    }
  }
  for (int i = 0; i < duzina; i++)
    printf("%d ", niz2[i]);
----------------------------------------

  return 0;
} */
/*NIZOVI I FUNKCIJE

double mnozenjeSkalara(int duzina, double niz1[], double niz2[])
{
  double suma = 0;
  for (int i = 0; i < duzina; i++)
    suma += niz1[i] * niz2[i];
  return suma;
}

int Razliciti(const int niz[], int duzina)
{
  int i, j, brojac = 0;
  for (i = 0; i < duzina; i++)
  {
    for (j = 0; j < i && niz[j] != niz[i]; j++)
      ;

    if (j == i)
      brojac++;
  }
  return brojac;
}

double prosecnaOcena(int ocene[], int brojUcenika)
{
  double prosecnaOcena = 0, suma = 0;

  for (int i = 0; i < brojUcenika; i++)
    suma += ocene[i];
  return prosecnaOcena = (float)suma / brojUcenika;
}

double prosecnaOcenaPolozenih(int ocene[], int brojUcenika)
{
  int polozili = 0, sumaOcenaPolozenih = 0;
  double prosecnaOcenaPolozenih;
  for (int i = 0; i < brojUcenika; i++)
    if (ocene[i] > 5)
    {
      polozili++;
      sumaOcenaPolozenih += ocene[i];
    }
  prosecnaOcenaPolozenih = (float)sumaOcenaPolozenih / polozili;
  return prosecnaOcenaPolozenih;
}

int brojPolozenih(int ocene[], int brojUcenika)
{
  int polozili = 0, sumaOcenaPolozenih = 0;
  for (int i = 0; i < brojUcenika; i++)
    if (ocene[i] > 5)
      polozili++;
  return polozili;
}

int brojNepolozenih(int ocene[], int brojUcenika)
{
  int nepolozili = 0, sumaOcenaPolozenih = 0;
  for (int i = 0; i < brojUcenika; i++)
    if (ocene[i] <= 5)
      nepolozili++;
  return nepolozili;
}

int veciOdProsecnog(int ocene[], int brojUcenika)
{
  int veciOdProsecnog = 0;
  for (int i = 0; i < brojUcenika; i++)
    if (ocene[i] > prosecnaOcena(ocene, brojUcenika))
      veciOdProsecnog++;
  return veciOdProsecnog;
}

void fibonacijevNiz(int niz[], int duzina)
{
  niz[0] = 1, niz[1] = 1;
  for (int i = 2; i < duzina; i++)
    niz[i] = niz[i - 2] + niz[i - 1];

  for (int i = 0; i < duzina; i++)
  {
    printf("%d ", niz[i]);
  }
}

float skalarniProizvod(const float niz1[], const float niz2[], int duzina)
{
  return (duzina > 0) ? niz1[0] * niz2[0] + skalarniProizvod(niz1 + 1, niz2 + 1, duzina - 1) : 0;
}

int main()
{ /*
   int duzina;
   printf("Unesite duzinu niza: ");
   scanf("%d", &duzina);

   double niz1[MAX], niz2[MAX];
   for (int j = 0; j < duzina; j++)
   {
     printf("Prvi niz element %d: ", j + 1);
     scanf("%lf", &niz1[j]);
   }
   for (int j = 0; j < duzina; j++)
   {
     printf("Prvi niz element %d: ", j + 1);
     scanf("%lf", &niz2[j]);
   }

   printf("Suma skalara je: %.2f ", mnozenjeSkalara(duzina, niz1, niz2));
   -----------------------------------------------------------

  int niz[MAX], duzina;
  printf("Duzina niza: ");
  scanf("%d", &duzina);

  for (int i = 0; i < duzina; i++)
  {
    printf("Element br. %d: ", i + 1);
    scanf("%d", &niz[i]);
  }
  printf("\n Broj razl. elemenata je %d", Razliciti(niz, duzina));
   -----------------------------------------------------------
  int brojUcenika;

  printf("Broj ucenika koji su polagali: ");
  scanf("%d", &brojUcenika);

  int ocene[brojUcenika];
  for (int i = 0; i < brojUcenika; i++)
  {
    printf("Ocena ucenika br.%d: ", i + 1);
    scanf("%d", &ocene[i]);
    while (ocene[i] > 10 || ocene[i] < 0)
    {
      printf("[ERROR] Ocena mora biti izmedju 0 i 10!\n");

      printf("Ocena ucenika br.%d: ", i + 1);
      scanf("%d", &ocene[i]);
    }
  }
  printf("Ukupna prosecna ocena: %.2f!\n", prosecnaOcena(ocene, brojUcenika));
  printf("Prosecna ocena onih koji su polozili: %.2f!\n", prosecnaOcenaPolozenih(ocene, brojUcenika));
  printf("Broj ucenika koji su polozili: %d\n", brojPolozenih(ocene, brojUcenika));
  printf("Broj ucenika koji nisu polozili: %d\n", brojNepolozenih(ocene, brojUcenika));
  printf("Veca ocena od prosecne: %d", veciOdProsecnog(ocene, brojUcenika));
   -----------------------------------------------------------
  int duzina;
  printf("Odaberite duzinu fibonacijevog niza: ");
  scanf("%d", &duzina);

  int niz[duzina];

  fibonacijevNiz(niz, duzina);
   -----------------------------------------------------------
  int duzina;
  printf("Duzina oba niza: ");
  scanf("%d", &duzina);

  float niz1[duzina], niz2[duzina];

  for (int i = 0; i < duzina; i++)
  {
    printf("Prvi niz element br.%d: ", i + 1);
    scanf("%f", &niz1[i]);
  }
  for (int i = 0; i < duzina; i++)
  {
    printf("Drugi niz element br.%d: ", i + 1);
    scanf("%f", &niz2[i]);
  }

  printf("Skalarni proizvod (Ai * Bi): %.2f", skalarniProizvod(niz1, niz2, duzina));
  return 0;
  }
  */
/*PRETRAZIVANJE NIZOVA
void trazenjeBroja(int niz[], int duzina, int trazen)
{
  int postoji = 0;
  for (int i = 0; i < duzina; i++)
    if (niz[i] == trazen)
    {
      postoji = 1;
      printf("Trazeni broj se nalazi na poziciji: %d\n", i + 1);
    }
  if (!postoji)
    printf("Trazeni broj ne postoji u nizu.");
}

void binarnoTrazenje(int i, int niz[], int trazeni, int duzina)
{
  int pronadjen = 0;
  if (trazeni == niz[i])
  {
    pronadjen = 1;
    printf("Trazeni broj se nalazi na mestu: %d", i + 1);
  }
  if (trazeni > niz[i])
  {
    for (i; i < duzina; i++)
      if (trazeni == niz[i])
      {
        pronadjen = 1;
        printf("Trazeni broj se nalazi na mestu: %d", i + 1);
      }
  }
  i = duzina / 2;

  if (trazeni < niz[i])
  {
    for (i; i > 0; i--)
    {
      if (trazeni == niz[i])
      {
        pronadjen = 1;
        printf("Trazeni broj se nalazi na mestu: %d", i + 1);
      }
    }
  }
  if (!pronadjen)
    printf("Trazeni broj nije u nizu.");
}

int main()
{

 int duzina;
 printf("Duzina oba niza: ");
 scanf("%d", &duzina);

 int niz[duzina];

 for (int i = 0; i < duzina; i++)
 {
   printf("Element br.%d: ", i + 1);
   scanf("%d", &niz[i]);
 }

 int najveci = niz[0], pozicija;
 for (int i = 0; i < duzina; i++)
   if (niz[i] > najveci)
   {
     najveci = niz[i];
     pozicija = i;
   }
 printf("Najveci element niza je %d, na poziciji %d", najveci, pozicija + 1);
  -----------------------------------------------------------
 int duzina;
 printf("Duzina oba niza: ");
 scanf("%d", &duzina);

 int niz[duzina];

 for (int i = 0; i < duzina; i++)
 {
   printf("Element br.%d: ", i + 1);
   scanf("%d", &niz[i]);
 }

 int najveci = niz[0], najmanji = niz[0];

 for (int i = 0; i < duzina; i++)
 {
   if (niz[i] > najveci)
     najveci = niz[i];
   if (niz[i] < najmanji)
     najmanji = niz[i];
 }
 printf("Specijalni brojevi su: ");
 for (int i = 0; i < duzina; i++)
 {
   if (niz[i] < najveci / 2 && niz[i] > najmanji * 2)
     printf("%d ", niz[i]);
 }
  -----------------------------------------------------------
  int duzina;
  scanf("%d", &duzina);
  int niz[duzina];

  for (int i = 0; i < duzina; i++)
    scanf("%d", &niz[i]);

  int najveci, brojac;

  for (int i = 0; i < duzina; i++)
    if (niz[i] % 2 == 0)
    {
      najveci = niz[i];
      break;
    }

  for (int i = 0; i < duzina; i++)
    if (niz[i] > najveci && niz[i] % 2 == 0)
    {
      najveci = niz[i];
      brojac++;
    }
  if (brojac != 0)
    printf("Najveci parni element je %d", najveci);
  else
    printf("Niz nema parnih elemenata.");
  -----------------------------------------------------------
  int duzina;

  printf("Unesi duzinu niza (min. 2): ");
  scanf("%d", &duzina);
  while (duzina < 2)
  {
    printf("Unesi duzinu niza (min. 2): ");
    scanf("%d", &duzina);
  }
  int niz[duzina];
  for (int i = 0; i < duzina; i++)
    scanf("%d", &niz[i]);

  int najveciParniIndeks = niz[0], pozicija;

  for (int i = 0; i < duzina; i += 2)
    if (niz[i] > najveciParniIndeks)
    {
      najveciParniIndeks = niz[i];
      pozicija = i;
    }

  printf("Najveci parni element u nizu je: %d,\nNa poziciji: %d. (Niz racuna 0 kao prvi element)", najveciParniIndeks, pozicija);
  -----------------------------------------------------------
  int duzina = 0;
  while (duzina < 2)
  {
    printf("Unesi duzinu niza (min. 2): ");
    scanf("%d", &duzina);
  }
  int niz[duzina];
  for (int i = 0; i < duzina; i++)
  {
    printf("Element br.%d: ", i + 1);
    scanf("%d", &niz[i]);
  }
  int brojac = 0;
  for (int i = 3; i < duzina; i++)
  {
    if (niz[i] != niz[i - 2] + niz[i - 1])
      brojac++;
  }

  if (brojac == 0)
    printf("Niz je fibonacijev!!!");
  else
    printf("Niz nije fibonacijev!");
  -----------------------------------------------------------
  int duzina = 0;

  printf("Unesi duzinu niza: ");
  scanf("%d", &duzina);
  int niz[duzina];

  for (int i = 0; i < duzina; i++)
  {
    printf("Element br.%d: ", i + 1);
    scanf("%d", &niz[i]);
  }
  int trazeni, postoji = 0;
  printf("Kojem broju trazite poziciju: ");
  scanf("%d", &trazeni);
  for (int i = 0; i < duzina; i++)
  {
    if (niz[i] == trazeni)
    {
      postoji = 1;
      printf("Trazeni element je na poziciji %d\n", i + 1);
    }
  }
  if (!postoji)
  {
    printf("Trazeni element ne postoji u nizu!");
  }
  -----------------------------------------------------------
  int duzina;
  printf("Duzina niza: ");
  scanf("%d", &duzina);

  int niz[duzina];

  for (int i = 0; i < duzina; i++)
  {
    printf("Element br.%d: ", i + 1);
    scanf("%d", &niz[i]);
  }
  int trazeni;
  printf("Kojem broju trazite poziciju: ");
  scanf("%d", &trazeni);

  trazenjeBroja(niz, duzina, trazeni);
  -----------------------------------------------------------
  // printf("%d", (21 / 2) + 1);
  int duzina;
  printf("Duzina niza: ");
  scanf("%d", &duzina);

  int niz[duzina];

  for (int i = 0; i < duzina; i++)
  {
    printf("Element br.%d: ", i + 1);
    scanf("%d", &niz[i]);
    while (niz[i] <= niz[i - 1] && i != 0)
    {
      printf("Element br.%d: ", i + 1);
      scanf("%d", &niz[i]);
    }
  }
  int i = duzina / 2;
  printf("Trazenje pocinje od elementa br.%d \n", i + 1);
  int trazeni, pronadjen = 0;
  printf("Trazeni broj: ");
  scanf("%d", &trazeni);

  printf("I:%d ", niz[i]);

  if (trazeni == niz[i])
  {
    pronadjen = 1;
    printf("Trazeni broj se nalazi na mestu: %d", i + 1);
  }
  if (trazeni > niz[i])
  {
    for (i; i < duzina; i++)
      if (trazeni == niz[i])
      {
        pronadjen = 1;
        printf("Trazeni broj se nalazi na mestu: %d", i + 1);
      }
  }
  i = duzina / 2;

  if (trazeni < niz[i])
  {
    for (i; i > 0; i--)
    {
      if (trazeni == niz[i])
      {
        pronadjen = 1;
        printf("Trazeni broj se nalazi na mestu: %d", i + 1);
      }
    }
  }
  if (!pronadjen)
    printf("Trazeni broj nije u nizu.");
  -----------------------------------------------------------
  int duzina;
  printf("Duzina niza: ");
  scanf("%d", &duzina);

  int niz[duzina];

  for (int i = 0; i < duzina; i++)
  {
    printf("Element br.%d: ", i + 1);
    scanf("%d", &niz[i]);
    while (niz[i] <= niz[i - 1] && i != 0)
    {
      printf("Element br.%d: ", i + 1);
      scanf("%d", &niz[i]);
    }
  }
  int i = duzina / 2;
  printf("Trazenje pocinje od elementa br.%d \n", i + 1);
  int trazeni;
  printf("Trazeni broj: ");
  scanf("%d", &trazeni);

  binarnoTrazenje(i, niz, trazeni, duzina);
  -----------------------------------------------------------
  return 0;
}*/
/*
int main()
{
  //MENJANJE VRSTA
  int vrste, kolone, matrica[MAX][MAX];
  scanf("%d", &vrste);
  scanf("%d", &kolone);
  for (int i = 0; i < vrste; i++)
  {
    for (int j = 0; j < kolone; j++)
    {
      printf("[%d][%d]", i, j);
      scanf("%d", &matrica[i][j]);
    }
  }
  for (int i = 0; i < vrste; i++)
  {
    for (int j = 0; j < kolone; j++)
      printf("%d ", matrica[i][j]);
    printf("\n");
  }
  int prvaMatrica, drugaMatrica, k;
  scanf("%d", &prvaMatrica);
  scanf("%d", &drugaMatrica);

  for (int i = 0; i < vrste; i++)
  {
    if (i == prvaMatrica - 1)
    {
      k = drugaMatrica - 1;
      for (int j = 0; j < kolone; j++)
        printf("%d ", matrica[k][j]);
    }
    if (i == drugaMatrica - 1)
    {
      k = prvaMatrica - 1;
      for (int j = 0; j < kolone; j++)
        printf("%d ", matrica[k][j]);
    }
    if (i != prvaMatrica - 1 && i != drugaMatrica - 1)
    {
      for (int j = 0; j < kolone; j++)
        printf("%d ", matrica[i][j]);
    }
    printf("\n");
  }
}

int main()
{

  //MENJANJE KOLONA
  int vrste, kolone, k;
  scanf("%d", &vrste);
  scanf("%d", &kolone);

  int matrica[MAX][MAX];
  for (int i = 0; i < vrste; i++)
    for (int j = 0; j < kolone; j++)
    {
      printf("El. [%d][%d]: ", i, j);
      scanf("%d", &matrica[i][j]);
    }
  int prvaKolona, drugaKolona;
  for (int i = 0; i < vrste; i++)
  {
    for (int j = 0; j < kolone; j++)
      printf("%d ", matrica[i][j]);
    printf("\n ");
  }
  scanf("%d", &prvaKolona);
  scanf("%d", &drugaKolona);

  for (int i = 0; i < vrste; i++)
  {
    for (int j = 0; j < kolone; j++)
    {
      if (j == prvaKolona - 1)
      {
        k = drugaKolona - 1;
        printf("%d ", matrica[i][k]);
      }
      if (j == drugaKolona - 1)
      {
        k = prvaKolona - 1;
        printf("%d ", matrica[i][k]);
      }
      if (j != drugaKolona - 1 && j != prvaKolona - 1)
        printf("%d ", matrica[i][j]);
    }
    printf("\n");
  }
  return 0;
}*/