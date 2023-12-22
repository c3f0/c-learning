#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  int dice = 5;
  int roll = 0;
  for(int i = 1; i <= dice; i++)
    {
      // produces random number between 0 and RAN_MAX
      // which is system dependant but usually very high number
      // 32 000+ high
      roll = rand() % 6 + 1;
      printf("Dice nr. %d = %d\n", i, roll);
    }
  
  return 0;
}
