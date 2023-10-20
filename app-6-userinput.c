#include <stdio.h>
#include <stdlib.h>

int main()
{
  double gpa;
  int age;
  char name[20];
  // printf("Enter your age:");
  // scanf("%d", &age);
  // printf("Hello, you are %d years old", age);

  // printf("\nEnter your gpa:");
  // scanf("%lf", &gpa);
  // printf("Your gpa is %f", gpa);

  // printf("\nEnter your name:");
  // scanf("%s", name);
  // printf("Your name is %s", name);

  printf("\nEnter your name:");
  fgets(name, 20, stdin);
  printf("Your name is %s abcdef", name);
  return 0;
}