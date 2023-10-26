#include <stdio.h>

int main()
{
  int abc, a, b, c;
  char operator;
  printf("Upisi trocifreni broj: ");
  printf("\nUnesi znak: ");
  scanf("%d %c", &abc, &operator);
  a = abc / 100;
  b = (abc / 10) % 10;
  c = abc % 10;

  switch (operator)
  {
  case '+':
    printf("Zbir je %d", a + b + c);
    break;
  case '-':
    printf("Razlika je %d", a - b - c);
    break;
  case '*':
    printf("Proizvod je %d", a * b * c);
    break;
  case '/':
    printf("Resenje je %d", a / b / c);
    break;
  default:
    printf("Niste uneli validan znak");
  }

  return 0;
}