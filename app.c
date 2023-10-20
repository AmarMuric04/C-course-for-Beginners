#include <stdio.h>

int main()
{
  char characterName[] = "Murga";
  int characterAge = 20;
  printf("   /|\n");
  printf("  / |\n");
  printf(" /  |\n");
  printf("/___|\n");

  printf("There once was a ship that put to sea\n");
  printf("The name of the ship was %s\n", characterName);

  characterAge = 30;
  printf("The winds blew up, her bow dipped down\n");
  printf("Oh blow, my bully boys, blow (%d)\n", characterAge);

  return 0;
}