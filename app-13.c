#include <stdio.h>

int main()
{
  int abc, a, b, c;
  printf("Unesi trocifreni broj: ");
  scanf("%d", &abc);

  a = abc / 100;
  b = (abc / 10) % 10;
  c = abc % 10;

  if (abc > 99 && abc < 1000)
  {
    if (b < a)
    {
      if (b == c)
      {
        printf("Broj je %d%d%d", c, a, b);
      }
      else if (a < c)
      {
        printf("Broj je %d%d%d", b, c, a);
        printf("\nDrugi broj je %d%d%d", a, c, b);
      }
      else
      {
        printf("Broj je %d%d%d", c, a, b);
        printf("\nDrugi broj je %d%d%d", b, a, c);
      }
    }
    else if (b < c)
    {
      if (b == a)
      {
        printf("Broj je %d%d%d", a, c, b);
      }
      else if (c < a)
      {
        printf("Broj je %d%d%d", b, a, c);
        printf("\nDrugi broj je %d%d%d", c, a, b);
      }
      else
      {
        printf("Broj je %d%d%d", a, c, b);
        printf("\nDrugi broj je %d%d%d", b, c, a);
      }
    }
    else
    {
      printf("\nBroj je %d%d%d", a, b, c);
    }
  }
  else
  {

    printf("Niste uneli validan broj!");
  }
  return 0;
}