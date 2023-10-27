#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
  int a;
  srand(time(10));
  int b = rand();

  printf("Guessa a number between 1-10 %d", b);
  scanf("%d", a);

  if (a > 0 && a < 11)
  {
  }
}