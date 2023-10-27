#include <stdio.h>

struct Student
{
  char name[50];
  char major[50];
  int age;
  double gpa;
};

int main()
{
  struct Student student1;
  student1.age = 22;
  student1.gpa = 3.2;
  strcpy(student1.name, "Amar");
  strcpy(student1.major, "Software Engineer");

  struct Student student2;
  student2.age = 18;
  student2.gpa = 4;
  strcpy(student2.name, "Murga");
  strcpy(student2.major, "Hardware Engineer");

  printf("%f\n", student1.gpa);
  printf("%s\n", student1.major);

  printf("%f\n", student2.gpa);
  printf("%s\n", student2.major);
  return 0;
}