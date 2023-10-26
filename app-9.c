#include <stdio.h>

int main()
{
  int s, d, h, m, sec;

  printf("Unesi broj \n");
  scanf("%d", &sec);
  s = sec % 60;
  m = sec / 60;
  h = m / 60;
  m = m % 60;
  d = h / 24;
  h = h % 24;

  printf("Vreme: %d : %d : %d : %d", d, h, m, s);
  return 0;
}