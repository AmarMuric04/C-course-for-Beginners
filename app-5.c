#include <stdio.h>
#include <stdlib.h>

int main()
{

  /* printf("Comments are fun");*/

  // Constants

  int num = 5;

  printf("%d", num);

  num = 2;
  printf("\n%d", num);

  const int constnum = 5;

  printf("\n%d", constnum);

  // Cant do => constnum = 4;

  printf("Hello");    // Also considered a constant because it cant be changed.
  printf("\n%d", 90); // 90 is also a constant because it cant be changed.

  return 0;
}