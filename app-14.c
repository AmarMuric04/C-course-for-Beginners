#include <stdio.h>

int main()
{
  int br;
  printf("Unesite trocifreni broj\n");
  scanf("%d", &br);
  if (br > 99 && br < 1000)
  {
    int cz = br % 10;
    if (cz < 5)
      br += 2;
    else
    {
      br -= 5;
      printf("Novi broj je %d", br);
    }
  }
  else
    printf("Niste uneli trocifreni broj");
  return 0;
}