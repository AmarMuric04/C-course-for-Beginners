
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
        int
        main()
{

  int max, xyz, x, y, z;

  printf("Unesite trocifreni broj:\t");
  scanf("%d", &xyz);

  x = xyz / 100;
  y = (xyz / 10) % 10;
  z = xyz % 10;

  max = x;
  if (y > max)
    max = y;
  if (z > max)
    max = z;

  if (max == x)
  {
    if (z != 0 && z != y)
      printf("%d%d%d\n", z, max, y);
    if (y != 0)
      printf("%d%d%d\n", y, max, z);
    if (z == 0 && y == 0)
      printf("Nema mogucih kombinacija\n");
  }

  else if (max == z)
  {
    if (x != 0 && x != y)
      printf("%d%d%d\n", x, max, y);
    if (y != 0)
      printf("%d%d%d\n", y, max, x);
    if (x == 0 && y == 0)
      printf("Nema mogucih kombinacija\n");
  }

  else if (max == y)
  {
    if (x != 0 && x != z)
      printf("%d%d%d\n", x, max, z);
    if (z != 0)
      printf("%d%d%d\n", z, max, x);
    if (x == 0 && y == 0)
      printf("Nema mogucih kombinacija\n");
  }

  return 0;   
}