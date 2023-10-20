#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number;

  printf("Enter a number -->");
  scanf("%d", &number);
  if (number > 10)
    printf("Number is bigger than 10 (%d)", number);
  else
    printf("Number is less than 10 (%d)", number);

  return 0;
}
