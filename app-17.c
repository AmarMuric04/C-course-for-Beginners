#include <stdio.h>

int main()
{

  char grade;
  printf("Enter your grade: ");
  scanf(" %c", &grade);

  switch (grade)
  {
  case 'A':
    printf("You passed flawlessly");
    break;
  case 'B':
    printf("You passed!");
    break;
  case 'C':
    printf("You did good!");
    break;
  case 'D':
    printf('You did alright!');
    break;
  case 'F':
    printf("You failed...");
    break;
  default:
    printf("Invalid grade");
  }
  return 0;
}