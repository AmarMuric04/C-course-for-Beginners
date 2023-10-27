#include <stdio.h>
#include <stdlib.h>

int main()
{

  int secretNumber = 5;
  int userNumber;
  int i = 3;

  while (userNumber != secretNumber && i > 0)
  {
    i--;
    printf("Try to guess the number: ");
    scanf("%d", &userNumber);
    if (userNumber > secretNumber)
    {
      if (i == 0)
      {
        printf("Wrong!\nNo more guesses left,\nYou lost!");
        return;
      }
      else
      {
        printf("Number is too high!\nYou have (%d) guesses left\n", i);
      }
    }
    else if (userNumber < secretNumber)
    {
      if (i == 0)
      {
        printf("Wrong!\nNo more guesses left\nYou lost!");
        return;
      }
      else
      {
        printf("Number is too low!\nYou have (%d) guesses left\n", i);
      }
    }
  }

  if (userNumber == secretNumber)
  {
    printf("You win!");
  }
}