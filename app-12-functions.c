#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cube(double num)
{
  // double result = num * num * num;
  // return result;
  return num * num * num;
}

int main()
{
  // printf("Top");
  // sayHi("Mike", 40);
  // sayHi("Steven", 18);
  // sayHi("Peter", 20);
  // sayHi("Michael", 30);
  // printf("\nbottom");

  printf("Answer: %f", cube(10.75232));
  return 0;
}

void sayHi(char name[], int age)
{
  printf("\nHello user %s\nYou are %d", name, age);
}
