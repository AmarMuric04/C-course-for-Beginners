#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("hello\nworld");

  int favNum = 100;

  int notFavNum = favNum * 10;

  printf("\n%s %d or %d", "My favorite number is", favNum, notFavNum);
  return 0;
}