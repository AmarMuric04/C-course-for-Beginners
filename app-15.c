#include <stdio.h>

int max(int num1, int num2, int num3)
{
  int result;
  // if (num1 > num2)
  // {
  //   return result = printf("%d is bigger than %d", num1, num2);
  // }
  // else if (num1 == num2)
  // {
  //   return result = printf("The numbers are the same");
  // }
  // else
  // {
  //   return result = printf("%d is bigger than %d", num2, num1);
  // }

  // AND
  if (num1 >= num2 && num1 >= num3)
    result = num1;

  else if (num2 >= num1 && num2 >= num3)
    result = num2;
  else
    result = num3;
  return result;
};

int main()
{
  // printf("%d", max(2, 5, 3));

  // OR
  if (3 > 2 || 3 > 5)
  {
    printf("%d", 3 > 2);
  }
  else
  {
    printf("%d", 3 > 5);
  }

  // NEGATING = > !
  if (!(3 > 2) || 3 > 5)
  {
    printf("\n%d", 3 > 2);
  }
  else
  {
    printf("\n%d", 3 > 5);
  }
  // for (int i = 2; i < 10; i += 2)
  // {
  //   printf("%d\n", i);
  // }

  // int i = 0;

  // while (i < 10)
  // {
  //   i++;
  //   printf("%d\n", i);
  // }

  return 0;
}