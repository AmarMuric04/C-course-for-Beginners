#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Top");
  sayHi("Mike", 40);
  sayHi("Steven", 18);
  sayHi("Peter", 20);
  sayHi("Michael", 30);
  printf("\nbottom");
  return 0;
}

void sayHi(char name[], int age)
{
  printf("\nHello user %s\nYou are %d", name, age);
}