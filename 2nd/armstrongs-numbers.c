#include <stdio.h>
#include <math.h>

int main()
{
  int ABC, a, b, c;

  for (ABC = 100; ABC <= 999; ABC++)
  {
    c = ABC % 10;
    b = (ABC / 10) % 10;
    a = ABC / 100;
    int power = (pow(a, 3) + pow(b, 3) + pow(c, 3));
    if (power == ABC)
    {
      printf("%d\n", ABC);
    }
  }
  return 0;
}