#include <stdio.h>

int main()
{
  int age = 30;
  double gpa = 3.4;
  char grade = 'A';
  char *pGrade = &grade;
  double *pGpa = &gpa;
  int *pAge = &age;

  printf("age's memory address: %d", *pAge);
  return 0;
}