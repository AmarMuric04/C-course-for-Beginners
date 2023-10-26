#include <stdio.h>

int main()
{

  // char string[20];
  // char age[20];
  // printf("\nEnter your name:");
  // fgets(string, 20, stdin);
  // printf("\nEnter your age using letters");

  // fgets(age, 20, stdin);
  // printf("Your name is %sYour age is %s", string, age);

  int a;
  int b = 10;
  printf("Unesi broj");
  scanf("%d", &a);

  // if (a > b)
  //   printf("vas broj je veci od %d", b);
  // else
  //   printf("Vas broj je manji od %d", b);

  switch (a)
  {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
  default:
    printf("Niste upisali broj od 1 do 7");
  };
  return 0;
}