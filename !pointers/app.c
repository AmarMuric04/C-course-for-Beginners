#include <stdio.h>

void change_value(int *nb);
void swap(int *a, int *b);
void printValues(void *number, char type);

int main()
{
  // int nb = 42;
  // int b = 1000;

  // change_value(&nb);
  // printf("%d", nb);

  // printf("%d %d\n", nb, b);
  // swap(&nb, &b);
  // printf("%d %d\n", nb, b);

  // int n = 50;
  // int *pn = &n;
  // int **ppn = &pn;
  // int ***pppn = &ppn;

  // printf("%p - %p", *pppn, ppn);

  // printf("Enter a number: ");
  // int a;
  // scanf("%d", &a);

  // printValues(&a, 'i');
  // printValues(&a, 'c');
  // printValues(&a, 's');
  // printValues(&a, 'f');

  return 0;
}

void printValues(void *number, char type)
{
  if (type == 'i')
    printf("\nvalue as an integer -> %d", *(int *)number);
  if (type == 'c')
    printf("\nvalue as a character -> %c", *(char *)number);
  if (type == 's')
    printf("\nvalue as a short -> %hi", *(short *)number);
  if (type == 'f')
    printf("\nvalue as a float -> %E", *(float *)number);
}

void change_value(int *nb)
{
  *nb = 1337;
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}