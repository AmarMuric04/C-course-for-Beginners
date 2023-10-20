#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number;

  printf("Enter a number -->");
  scanf("%d", &number);
  if (number > 10)
    printf("Number is bigger than 10 (%d)", number);
  else if (number > 10)
    printf("Number is less than 10 (%d)", number);
  else
    printf("Number is 10");

  return 0;
}
